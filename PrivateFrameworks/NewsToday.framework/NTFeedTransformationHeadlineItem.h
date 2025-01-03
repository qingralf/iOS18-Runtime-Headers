/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTFeedTransformationHeadlineItem : NSObject <NTFeedTransformationItem> {
    NSURL * _actionURL;
    NSDate * _cacheExpirationDate;
    <FCHeadlineProviding> * _headline;
    bool  _local;
    NSString * _surfacedByChannelID;
}

@property (nonatomic, readonly, copy) NSURL *actionURL;
@property (nonatomic, readonly, copy) NSDate *cacheCutoffTimeRelativeDate;
@property (nonatomic, readonly, copy) NSDate *cacheExpirationDate;
@property (nonatomic, readonly, copy) NSString *clusterID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NTPBFeedItem *feedItemForHeadlineFetch;
@property (nonatomic, readonly) <FCFeedTransformationItem> *feedTransformationItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) <FCHeadlineProviding> *headline;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isLocal, nonatomic) bool local;
@property (nonatomic, readonly) bool needsFeedItemHeadlinesFetch;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *surfacedByChannelID;
@property (nonatomic, readonly) unsigned long long todayItemType;

- (void).cxx_destruct;
- (id)actionURL;
- (id)cacheCutoffTimeRelativeDate;
- (id)cacheExpirationDate;
- (id)clusterID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedItemForHeadlineFetch;
- (id)feedTransformationItem;
- (unsigned long long)hash;
- (id)headline;
- (id)identifier;
- (id)init;
- (id)initWithHeadline:(id)arg1 cacheExpirationDate:(id)arg2 actionURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (void)markAsLocal;
- (bool)needsFeedItemHeadlinesFetch;
- (id)protoitemWithFetchedFeedItemHeadline:(id)arg1 configuration:(id)arg2;
- (void)setHeadline:(id)arg1;
- (void)setLocal:(bool)arg1;
- (id)surfacedByChannelID;
- (unsigned long long)todayItemType;

@end
