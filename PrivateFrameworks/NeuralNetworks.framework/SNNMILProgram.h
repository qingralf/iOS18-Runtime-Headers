/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeuralNetworks.framework/NeuralNetworks
 */

@interface SNNMILProgram : NSObject {
    NSString * _milFilePath;
    struct shared_ptr<MIL::IRProgram> { 
        struct IRProgram {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _program;
}

@property (nonatomic, readonly) NSArray *functionNames;
@property (nonatomic, readonly) bool isReferencingBlobFile;
@property (nonatomic, readonly) NSString *milFilePath;

+ (void)loadContentsOfURL:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)functionNames;
- (id)functionWithName:(id)arg1;
- (id)initWithProgram:(struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> { struct __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> { struct IRProgram {} *x_1_1_1; } x1; })arg1;
- (id)initWithProgram:(struct unique_ptr<MIL::IRProgram, std::default_delete<MIL::IRProgram>> { struct __compressed_pair<MIL::IRProgram *, std::default_delete<MIL::IRProgram>> { struct IRProgram {} *x_1_1_1; } x1; })arg1 sourceFilePath:(id)arg2;
- (bool)isReferencingBlobFile;
- (id)milFilePath;
- (struct shared_ptr<MIL::IRProgram> { struct IRProgram {} *x1; struct __shared_weak_count {} *x2; })milProgram;
- (id)serializeToProtobufWithError:(id*)arg1;
- (void)writeToFile:(id)arg1;

@end