/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

@interface CRBasicCardSection : NSObject <CRCardSection> {
    <SFCardSection> * _backingCardSection;
    NSString * _cardSectionIdentifier;
}

@property (nonatomic, readonly) NSArray *actionCommands; /* unknown property attribute: ? */
@property (nonatomic, retain) <SFCardSection> *backingCardSection;
@property (nonatomic, readonly) NSString *cardSectionIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasNextCard; /* unknown property attribute: ? */
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *resolvedCardSections; /* unknown property attribute: ? */
@property (readonly) Class superclass;

+ (id)basicCardSectionWithBackingCardSection:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backingCardSection;
- (id)cardSectionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setBackingCardSection:(id)arg1;

@end
