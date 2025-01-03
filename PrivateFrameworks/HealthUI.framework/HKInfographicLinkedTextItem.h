/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInfographicLinkedTextItem : NSObject <HKInfographicItem> {
    NSString * _baseIdentifier;
    NSAttributedString * _descriptionString;
    id /* block */  _didTapLinkedText;
}

@property (nonatomic, copy) NSString *baseIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSAttributedString *descriptionString;
@property (nonatomic, copy) id /* block */ didTapLinkedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseIdentifier;
- (id)descriptionString;
- (id /* block */)didTapLinkedText;
- (id)initWithDescription:(id)arg1 didTapLinkedText:(id /* block */)arg2;
- (void)setBaseIdentifier:(id)arg1;
- (void)setDescriptionString:(id)arg1;
- (void)setDidTapLinkedText:(id /* block */)arg1;

@end
