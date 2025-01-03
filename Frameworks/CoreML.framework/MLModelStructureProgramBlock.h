/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLModelStructureProgramBlock : NSObject {
    NSArray * _inputs;
    NSArray * _operations;
    NSArray * _outputNames;
}

@property (nonatomic, readonly, copy) NSArray *inputs;
@property (nonatomic, readonly, copy) NSArray *operations;
@property (nonatomic, readonly, copy) NSArray *outputNames;

- (void).cxx_destruct;
- (id)initWithInputs:(id)arg1 outputNames:(id)arg2 operations:(id)arg3;
- (id)initWithMILBlock:(const void*)arg1 path:(struct Path { struct vector<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>, std::allocator<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>>> { void *x_1_1_1; void *x_1_1_2; struct __compressed_pair<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel> *, std::allocator<std::variant<CoreML::ModelStructure::Path::Root, CoreML::ModelStructure::Path::Program, CoreML::ModelStructure::Path::Program::Function, CoreML::ModelStructure::Path::Program::Block, CoreML::ModelStructure::Path::Program::Operation, CoreML::ModelStructure::Path::NeuralNetwork, CoreML::ModelStructure::Path::NeuralNetwork::Layer, CoreML::ModelStructure::Path::Pipeline, CoreML::ModelStructure::Path::Pipeline::SubModel>>> { void *x_3_2_1; } x_1_1_3; } x1; })arg2;
- (id)inputs;
- (id)operations;
- (id)outputNames;

@end
