/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SensitiveContentAnalysisML.framework/SensitiveContentAnalysisML
 */

@interface SCMLTextModerationLMPrediction : NSObject {
    NSString * _nameP1;
    float  _probability;
    bool  _safe;
}

@property (nonatomic, copy) NSString *nameP1;
@property (nonatomic) float probability;
@property (nonatomic) bool safe;

- (void).cxx_destruct;
- (id)initWithNameP1:(id)arg1 safe:(bool)arg2 probability:(float)arg3;
- (id)nameP1;
- (float)probability;
- (bool)safe;
- (void)setNameP1:(id)arg1;
- (void)setProbability:(float)arg1;
- (void)setSafe:(bool)arg1;

@end
