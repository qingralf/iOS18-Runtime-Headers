/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInfographicContentItem : NSObject <HKInfographicItem> {
    NSString * _baseIdentifier;
    NSAttributedString * _descriptionString;
    NSAttributedString * _titleString;
}

@property (nonatomic, copy) NSString *baseIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSAttributedString *descriptionString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSAttributedString *titleString;

- (void).cxx_destruct;
- (id)baseIdentifier;
- (id)descriptionString;
- (id)initWithTitle:(id)arg1 description:(id)arg2;
- (void)setBaseIdentifier:(id)arg1;
- (void)setDescriptionString:(id)arg1;
- (void)setTitleString:(id)arg1;
- (id)titleString;

@end
