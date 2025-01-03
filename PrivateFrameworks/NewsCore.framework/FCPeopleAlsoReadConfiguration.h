/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPeopleAlsoReadConfiguration : NSObject <NSCopying> {
    long long  _candidateArticleListMaxCachedAgeSeconds;
    NSString * _candidateArticleListSuffix;
    long long  _candidateMaxAgeSeconds;
    long long  _seedMaxAgeSeconds;
    long long  _seedMaxCount;
    long long  _seedMaxIntervalSinceLastReadSeconds;
}

@property (nonatomic, readonly) long long candidateArticleListMaxCachedAgeSeconds;
@property (nonatomic, readonly, copy) NSString *candidateArticleListSuffix;
@property (nonatomic, readonly) long long candidateMaxAgeSeconds;
@property (nonatomic, readonly) long long seedMaxAgeSeconds;
@property (nonatomic, readonly) long long seedMaxCount;
@property (nonatomic, readonly) long long seedMaxIntervalSinceLastReadSeconds;

- (void).cxx_destruct;
- (id)candidateArticleListIDForSeedArticleID:(id)arg1 storeFrontID:(id)arg2;
- (long long)candidateArticleListMaxCachedAgeSeconds;
- (id)candidateArticleListSuffix;
- (long long)candidateMaxAgeSeconds;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (long long)seedMaxAgeSeconds;
- (long long)seedMaxCount;
- (long long)seedMaxIntervalSinceLastReadSeconds;

@end
