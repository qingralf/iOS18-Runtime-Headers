/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMPhotosMemoriesViewed : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    bool  _hasWatchedToEnd;
    NSString * _identifier;
    int  _viewedDurationBucket;
    bool  _watchedToEnd;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasWatchedToEnd;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int viewedDurationBucket;
@property (nonatomic, readonly) bool watchedToEnd;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasWatchedToEnd;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 viewedDurationBucket:(int)arg2 watchedToEnd:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasWatchedToEnd:(bool)arg1;
- (int)viewedDurationBucket;
- (bool)watchedToEnd;
- (void)writeTo:(id)arg1;

@end
