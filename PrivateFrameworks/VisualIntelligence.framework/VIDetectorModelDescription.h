/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualIntelligence.framework/VisualIntelligence
 */

@interface VIDetectorModelDescription : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _inputImageSize;
    NSString * _modelID;
    NSArray * _modelOutputs;
    NSURL * _modelURL;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } inputImageSize;
@property (nonatomic, readonly, copy) NSString *modelID;
@property (nonatomic, readonly, copy) NSArray *modelOutputs;
@property (nonatomic, readonly, copy) NSURL *modelURL;

- (void).cxx_destruct;
- (id)initWithModelURL:(id)arg1 modelID:(id)arg2 modelOutputs:(id)arg3 inputImageSize:(struct CGSize { double x1; double x2; })arg4;
- (struct CGSize { double x1; double x2; })inputImageSize;
- (id)modelID;
- (id)modelOutputs;
- (id)modelURL;

@end
