/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTSectionFeedFilterTransformation : NSObject <NTFeedTransforming> {
    <NTFeedTransforming> * _underlyingTransformation;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NTFeedTransforming> *underlyingTransformation;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTodayData:(id)arg1 configurationManager:(id)arg2 readArticlesFilterMethod:(int)arg3 seenArticlesFilterMethod:(int)arg4 minimumTimeSinceFirstSeenToFilter:(double)arg5 supplementalFeedFilterOptions:(unsigned long long)arg6 otherArticleIDs:(id)arg7 otherClusterIDs:(id)arg8 filterDate:(id)arg9 paywalledArticlesMaxCount:(unsigned long long)arg10;
- (id)transformFeedItems:(id)arg1;
- (id)underlyingTransformation;

@end