/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURenderTagNode : NURenderNode {
    NSString * _name;
}

@property (retain) NURenderNode *input;
@property (readonly) NSString *name;

+ (bool)validateName:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (id)_descriptionWithOffset:(long long)arg1 showInputs:(bool)arg2 map:(id)arg3;
- (id)_evaluateGeometrySpaceMap:(out id*)arg1;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)aliasDescription;
- (id)descriptionSubClassHook;
- (id)initWithInput:(id)arg1 name:(id)arg2;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)input;
- (id)name;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (void)setInput:(id)arg1;

@end
