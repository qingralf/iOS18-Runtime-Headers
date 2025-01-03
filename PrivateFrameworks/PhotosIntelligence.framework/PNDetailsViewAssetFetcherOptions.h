/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosIntelligence.framework/PhotosIntelligence
 */

@interface PNDetailsViewAssetFetcherOptions : NSObject {
    void curationLength;
    void fetchOptions;
    void includeOthersInSocialGroupAssets;
}

@property (nonatomic) long long curationLength;
@property (nonatomic, retain) PHFetchOptions *fetchOptions;
@property (nonatomic) bool includeOthersInSocialGroupAssets;

- (void).cxx_destruct;
- (long long)curationLength;
- (id)fetchOptions;
- (bool)includeOthersInSocialGroupAssets;
- (id)init;
- (id)initWithFetchOptions:(id)arg1;
- (void)setCurationLength:(long long)arg1;
- (void)setFetchOptions:(id)arg1;
- (void)setIncludeOthersInSocialGroupAssets:(bool)arg1;

@end
