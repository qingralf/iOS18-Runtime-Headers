/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUSourcePipelineBuilder : NSObject <NUPipelineBuilder> {
    NUSourceSchema * _sourceSchema;
}

@property (nonatomic, readonly, copy) NUSourceSchema *sourceSchema;

- (void).cxx_destruct;
- (id)buildPipeline:(out id*)arg1;
- (bool)buildPipeline:(id)arg1 error:(out id*)arg2;
- (id)init;
- (id)initWithSourceSchema:(id)arg1;
- (id)sourceSchema;

@end
