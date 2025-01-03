/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLNeuralNetworkCompiler : MLModel <MLSpecificationCompiler, MLSpecificationCompilerResolvingBlobFileReferences>

+ (id)_compileSpecification:(void*)arg1 blobMapping:(id)arg2 toArchive:(void*)arg3 options:(id)arg4 error:(id*)arg5;
+ (void)collectEspressoModelDetails:(void*)arg1 modelPath:(const void*)arg2;
+ (bool)collectNNModelDetailsFromArchive:(void*)arg1 spec:(void*)arg2 error:(id*)arg3;
+ (id)compileSpecification:(void*)arg1 blobMapping:(id)arg2 toArchive:(void*)arg3 options:(id)arg4 error:(id*)arg5;
+ (id)compileSpecification:(void*)arg1 toArchive:(void*)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)compiledVersionForSpecification:(void*)arg1 options:(id)arg2 error:(id*)arg3;
+ (id)iOS17CompilerVersionInfo;
+ (id)iOS18CompilerVersionInfo;

@end
