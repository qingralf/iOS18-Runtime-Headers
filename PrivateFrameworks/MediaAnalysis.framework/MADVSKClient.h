/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface MADVSKClient : NSObject {
    VSKClient * _client;
    bool  _isPrewarmed;
}

@property (nonatomic, readonly) VSKClient *client;
@property (nonatomic, readonly) bool isPrewarmed;

- (void).cxx_destruct;
- (id)client;
- (void)cooldown;
- (void)dealloc;
- (id)initWithConfig:(id)arg1 error:(id*)arg2;
- (bool)isPrewarmed;
- (void)warmup;

@end