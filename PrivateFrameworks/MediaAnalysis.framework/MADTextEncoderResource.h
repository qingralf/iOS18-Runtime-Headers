/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface MADTextEncoderResource : VCPMADResource {
    NSObject<OS_dispatch_queue> * _queue;
    CSUTextEncoder * _textEncoder;
}

@property (nonatomic, readonly) long long revision;
@property (nonatomic, readonly) CSUTextEncoder *textEncoder;
@property (nonatomic, readonly) long long tokenEmbeddingType;
@property (nonatomic, readonly) unsigned long long version;

+ (id)sharedResource;
+ (id)sharedResource:(long long)arg1;

- (void).cxx_destruct;
- (long long)activeCost;
- (id)additionalLayerNames;
- (long long)inactiveCost;
- (id)init;
- (void)purge;
- (long long)revision;
- (bool)supportsAgeTypePromptAdjustment;
- (id)textEncoder;
- (long long)tokenEmbeddingType;
- (id)tokensForAgeType:(unsigned short)arg1;
- (unsigned long long)version;

@end