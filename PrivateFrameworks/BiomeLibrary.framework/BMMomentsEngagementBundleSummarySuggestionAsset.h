/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMMomentsEngagementBundleSummarySuggestionAsset : BMEventBase <BMStoreData> {
    NSString * _assetType;
    unsigned int  _dataVersion;
    bool  _hasIsSelected;
    bool  _hasOrdinalRankInInterstitial;
    bool  _isSelected;
    int  _ordinalRankInInterstitial;
}

@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIsSelected;
@property (nonatomic) bool hasOrdinalRankInInterstitial;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSelected;
@property (nonatomic, readonly) int ordinalRankInInterstitial;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)assetType;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIsSelected;
- (bool)hasOrdinalRankInInterstitial;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIsSelected:(id)arg1 assetType:(id)arg2 ordinalRankInInterstitial:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (id)jsonDictionary;
- (int)ordinalRankInInterstitial;
- (id)serialize;
- (void)setHasIsSelected:(bool)arg1;
- (void)setHasOrdinalRankInInterstitial:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
