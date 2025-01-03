/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI
 */

@interface MUAddMissingDataLabeledValue : NSObject <MULabeledValueActionViewModelProviding> {
    id /* block */  _actionBlock;
    long long  _actionVariant;
    NSString * _alternativeTitleString;
    int  _analyticAction;
    int  _analyticsTarget;
    bool  _emphasizeValueString;
    NSString * _symbolName;
    NSString * _titleString;
    long long  _type;
    NSString * _valueString;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic) long long actionVariant;
@property (nonatomic, retain) NSString *alternativeTitleString;
@property (nonatomic, readonly) int analyticAction;
@property (nonatomic) int analyticsTarget;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool emphasizeValueString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *symbolName;
@property (nonatomic, retain) NSString *titleString;
@property (nonatomic, readonly) long long type;
@property (nonatomic, retain) NSString *valueString;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (long long)actionVariant;
- (id)alternativeTitleString;
- (int)analyticAction;
- (id)analyticsButtonValue;
- (int)analyticsTarget;
- (bool)emphasizeValueString;
- (id)initWithType:(long long)arg1;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setActionVariant:(long long)arg1;
- (void)setAlternativeTitleString:(id)arg1;
- (void)setAnalyticsTarget:(int)arg1;
- (void)setEmphasizeValueString:(bool)arg1;
- (void)setSymbolName:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)setValueString:(id)arg1;
- (id)symbolName;
- (id)titleString;
- (long long)type;
- (id)valueString;

@end
