/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInfographicTitleDetailOptionalButtonItem : NSObject <HKInfographicItem> {
    NSString * _baseIdentifier;
    id /* block */  _buttonAction;
    NSString * _buttonTextString;
    NSString * _detailString;
    NSString * _titleString;
}

@property (nonatomic, copy) NSString *baseIdentifier;
@property (nonatomic, readonly, copy) id /* block */ buttonAction;
@property (nonatomic, readonly, copy) NSString *buttonTextString;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *detailString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *titleString;

- (void).cxx_destruct;
- (id)baseIdentifier;
- (id /* block */)buttonAction;
- (id)buttonTextString;
- (id)detailString;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 buttonTextString:(id)arg3 buttonAction:(id /* block */)arg4;
- (void)setBaseIdentifier:(id)arg1;
- (id)titleString;

@end