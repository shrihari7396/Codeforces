package com.example;

import org.deeplearning4j.nn.conf.MultiLayerConfiguration;
import org.deeplearning4j.nn.conf.NeuralNetConfiguration;
import org.deeplearning4j.nn.conf.layers.DenseLayer;
import org.deeplearning4j.nn.conf.layers.OutputLayer;
import org.deeplearning4j.nn.multilayer.MultiLayerNetwork;
import org.deeplearning4j.optimize.listeners.ScoreIterationListener;
import org.nd4j.linalg.api.ndarray.INDArray;
import org.nd4j.linalg.factory.Nd4j;
import org.nd4j.linalg.lossfunctions.LossFunctions;
import org.nd4j.linalg.activations.Activation;

public class Main {
    public static void main(String[] args) {
        int inputSize = 2;   // Number of input neurons
        int outputSize = 1;  // Number of output neurons

        MultiLayerConfiguration config = new NeuralNetConfiguration.Builder()
                .seed(123)
                .activation(Activation.RELU)
                .list()
                .layer(0, new DenseLayer.Builder()
                        .nIn(inputSize)
                        .nOut(3)  // Hidden layer neurons
                        .build())
                .layer(1, new OutputLayer.Builder(LossFunctions.LossFunction.MSE)
                        .nIn(3)
                        .nOut(outputSize)
                        .activation(Activation.SIGMOID)
                        .build())
                .build();

        MultiLayerNetwork model = new MultiLayerNetwork(config);
        model.init();
        model.setListeners(new ScoreIterationListener(10));

        // Input and expected output data
        INDArray input = Nd4j.create(new double[][]{{0, 0}, {0, 1}, {1, 0}, {1, 1}});
        INDArray labels = Nd4j.create(new double[][]{{0}, {1}, {1}, {0}});  // XOR pattern

        // Train for a few epochs
        for (int i = 0; i < 1000; i++) {
            model.fit(input, labels);
        }

        // Evaluate predictions
        INDArray output = model.output(input);
        System.out.println("Predictions: " + output);
    }
}
