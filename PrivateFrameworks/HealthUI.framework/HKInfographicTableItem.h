/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInfographicTableItem : NSObject <HKInfographicItem> {
    NSString * _baseIdentifier;
    bool  _separatorHidden;
    NSAttributedString * _titleString;
    NSAttributedString * _valueString;
}

@property (nonatomic, copy) NSString *baseIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool separatorHidden;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSAttributedString *titleString;
@property (nonatomic, retain) NSAttributedString *valueString;

- (void).cxx_destruct;
- (id)baseIdentifier;
- (id)initWithTitle:(id)arg1 value:(id)arg2;
- (id)initWithTitle:(id)arg1 value:(id)arg2 separatorHidden:(bool)arg3;
- (bool)separatorHidden;
- (void)setBaseIdentifier:(id)arg1;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setTitleString:(id)arg1;
- (void)setValueString:(id)arg1;
- (id)titleString;
- (id)valueString;

@end
