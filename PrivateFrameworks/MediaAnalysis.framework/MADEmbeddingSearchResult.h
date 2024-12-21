/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface MADEmbeddingSearchResult : NSObject <NSSecureCoding> {
    NSString * _assetUUID;
    NSNumber * _distance;
    long long  _metric;
}

@property (nonatomic, readonly) NSString *assetUUID;
@property (nonatomic, readonly) NSNumber *distance;
@property (nonatomic, readonly) long long metric;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetUUID;
- (id)description;
- (id)distance;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetUUID:(id)arg1 distance:(id)arg2 metric:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (long long)metric;

@end