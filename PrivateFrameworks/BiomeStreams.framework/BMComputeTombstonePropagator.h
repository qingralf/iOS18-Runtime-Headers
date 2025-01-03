/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
 */

@interface BMComputeTombstonePropagator : NSObject {
    BMComputeSourceClient * _computeSource;
    unsigned long long  _domain;
    NSString * _streamIdentifier;
}

- (void).cxx_destruct;
- (id)computeSource;
- (void)didWriteTombstone:(id)arg1 timestamp:(double)arg2 account:(id)arg3 remoteName:(id)arg4;
- (id)initWithStreamIdentifier:(id)arg1 domain:(unsigned long long)arg2;

@end
