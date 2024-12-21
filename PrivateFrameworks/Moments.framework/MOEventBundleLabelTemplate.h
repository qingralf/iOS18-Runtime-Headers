/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Moments.framework/Moments
 */

@interface MOEventBundleLabelTemplate : NSObject {
    NSSet * _conditions;
    NSDictionary * _context;
    NSArray * _formats;
}

@property (nonatomic, copy) NSSet *conditions;
@property (nonatomic, copy) NSDictionary *context;
@property (nonatomic, copy) NSArray *formats;

+ (unsigned long long)capitalizationTypeFromString:(id)arg1;
+ (id)conditionsFromCapitalizations:(id)arg1;
+ (id)conditionsFromConditionStrings:(id)arg1;
+ (id)conditionsFromExtendStrings:(id)arg1;
+ (id)conditionsFromLabels:(id)arg1;
+ (id)formatsFromLabels:(id)arg1;

- (void).cxx_destruct;
- (bool)checkConditionForMetaData:(id)arg1;
- (id)conditions;
- (id)context;
- (id)description;
- (id)formats;
- (id)formattedStringsForMetaData:(id)arg1;
- (id)initWithConditionStrings:(id)arg1 labels:(id)arg2 context:(id)arg3;
- (id)initWithConditions:(id)arg1 formats:(id)arg2 context:(id)arg3;
- (id)initWithConditions:(id)arg1 labels:(id)arg2 context:(id)arg3;
- (bool)needCapitalizationForKeyword:(id)arg1;
- (bool)needExtensionForKeyword:(id)arg1;
- (void)setConditions:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFormats:(id)arg1;

@end