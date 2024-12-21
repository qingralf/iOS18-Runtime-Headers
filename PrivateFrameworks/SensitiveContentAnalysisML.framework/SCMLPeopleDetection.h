/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SensitiveContentAnalysisML.framework/SensitiveContentAnalysisML
 */

@interface SCMLPeopleDetection : NSObject {
    bool  _hasAge;
    bool  _hasEthnicity;
    bool  _hasGender;
    bool  _hasGenericPeople;
    bool  _hasMultiplePeople;
    NSAttributedString * _rewrittenText;
    NSArray * _spans;
}

@property (nonatomic) bool hasAge;
@property (nonatomic) bool hasEthnicity;
@property (nonatomic) bool hasGender;
@property (nonatomic) bool hasGenericPeople;
@property (nonatomic) bool hasMultiplePeople;
@property (nonatomic, copy) NSAttributedString *rewrittenText;
@property (nonatomic, retain) NSArray *spans;

- (void).cxx_destruct;
- (bool)hasAge;
- (bool)hasEthnicity;
- (bool)hasGender;
- (bool)hasGenericPeople;
- (bool)hasMultiplePeople;
- (id)init;
- (id)rewrittenText;
- (void)setHasAge:(bool)arg1;
- (void)setHasEthnicity:(bool)arg1;
- (void)setHasGender:(bool)arg1;
- (void)setHasGenericPeople:(bool)arg1;
- (void)setHasMultiplePeople:(bool)arg1;
- (void)setRewrittenText:(id)arg1;
- (void)setSpans:(id)arg1;
- (id)spans;

@end