/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPSafariUsagePropensity : PBCodable <NSSecureCoding, _CPSafariUsagePropensity> {
    _CPEngagementShareRatio * _engagementShareRatio;
    float  _goToSite;
    float  _localGoto;
    float  _localTap;
    float  _other;
    float  _parsecAppStore;
    float  _parsecGoto;
    float  _parsecMaps;
    float  _parsecNews;
    float  _parsecOther;
    float  _parsecStocks;
    float  _parsecTap;
    float  _parsecWeather;
    float  _parsecWeb;
    float  _parsecWiki;
    float  _thirdPartyCompletionOrRecentSearch;
    float  _thirdPartyGoto;
    float  _thirdPartyTap;
    _CPEngagementTriggerRatio * _topHitTriggerRatio;
    int  _totalEngagements;
    int  _totalTopHitEngagements;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _CPEngagementShareRatio *engagementShareRatio;
@property (nonatomic) float goToSite;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) float localGoto;
@property (nonatomic) float localTap;
@property (nonatomic) float other;
@property (nonatomic) float parsecAppStore;
@property (nonatomic) float parsecGoto;
@property (nonatomic) float parsecMaps;
@property (nonatomic) float parsecNews;
@property (nonatomic) float parsecOther;
@property (nonatomic) float parsecStocks;
@property (nonatomic) float parsecTap;
@property (nonatomic) float parsecWeather;
@property (nonatomic) float parsecWeb;
@property (nonatomic) float parsecWiki;
@property (readonly) Class superclass;
@property (nonatomic) float thirdPartyCompletionOrRecentSearch;
@property (nonatomic) float thirdPartyGoto;
@property (nonatomic) float thirdPartyTap;
@property (nonatomic, retain) _CPEngagementTriggerRatio *topHitTriggerRatio;
@property (nonatomic) int totalEngagements;
@property (nonatomic) int totalTopHitEngagements;

- (void).cxx_destruct;
- (id)engagementShareRatio;
- (float)goToSite;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (float)localGoto;
- (float)localTap;
- (float)other;
- (float)parsecAppStore;
- (float)parsecGoto;
- (float)parsecMaps;
- (float)parsecNews;
- (float)parsecOther;
- (float)parsecStocks;
- (float)parsecTap;
- (float)parsecWeather;
- (float)parsecWeb;
- (float)parsecWiki;
- (bool)readFrom:(id)arg1;
- (void)setEngagementShareRatio:(id)arg1;
- (void)setGoToSite:(float)arg1;
- (void)setLocalGoto:(float)arg1;
- (void)setLocalTap:(float)arg1;
- (void)setOther:(float)arg1;
- (void)setParsecAppStore:(float)arg1;
- (void)setParsecGoto:(float)arg1;
- (void)setParsecMaps:(float)arg1;
- (void)setParsecNews:(float)arg1;
- (void)setParsecOther:(float)arg1;
- (void)setParsecStocks:(float)arg1;
- (void)setParsecTap:(float)arg1;
- (void)setParsecWeather:(float)arg1;
- (void)setParsecWeb:(float)arg1;
- (void)setParsecWiki:(float)arg1;
- (void)setThirdPartyCompletionOrRecentSearch:(float)arg1;
- (void)setThirdPartyGoto:(float)arg1;
- (void)setThirdPartyTap:(float)arg1;
- (void)setTopHitTriggerRatio:(id)arg1;
- (void)setTotalEngagements:(int)arg1;
- (void)setTotalTopHitEngagements:(int)arg1;
- (float)thirdPartyCompletionOrRecentSearch;
- (float)thirdPartyGoto;
- (float)thirdPartyTap;
- (id)topHitTriggerRatio;
- (int)totalEngagements;
- (int)totalTopHitEngagements;
- (void)writeTo:(id)arg1;

@end
