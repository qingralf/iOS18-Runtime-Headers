/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMMomentsEventDataEventBundleOutlierMetadata : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    bool  _hasIsSignificant;
    bool  _hasOutlierScore;
    bool  _hasRaw_updatedDate;
    bool  _isSignificant;
    double  _outlierScore;
    double  _raw_updatedDate;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIsSignificant;
@property (nonatomic) bool hasOutlierScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSignificant;
@property (nonatomic, readonly) double outlierScore;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *updatedDate;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIsSignificant;
- (bool)hasOutlierScore;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIsSignificant:(id)arg1 outlierScore:(id)arg2 updatedDate:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isSignificant;
- (id)jsonDictionary;
- (double)outlierScore;
- (id)serialize;
- (void)setHasIsSignificant:(bool)arg1;
- (void)setHasOutlierScore:(bool)arg1;
- (id)updatedDate;
- (void)writeTo:(id)arg1;

@end