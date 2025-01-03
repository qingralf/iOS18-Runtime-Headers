/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCommandEngagementFeedback : SFFeedback <CRCommandEngagementFeedback> {
    SFButtonItem * _button;
    SFCardSection * _cardSection;
    SFCommand * _command;
    SFPhotosAttributes * _photosAttributes;
    SFSearchResult * _result;
    SFResultSection * _resultSection;
    unsigned long long  _triggerEvent;
}

@property (nonatomic, readonly) SFCommandEngagementFeedback *backingFeedback; /* unknown property attribute: ? */
@property (nonatomic, retain) SFButtonItem *button;
@property (nonatomic, retain) SFCardSection *cardSection;
@property (nonatomic, retain) SFCommand *command;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFPhotosAttributes *photosAttributes;
@property (nonatomic, retain) SFSearchResult *result;
@property (nonatomic, retain) SFResultSection *resultSection;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long triggerEvent;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)button;
- (id)cardSection;
- (id)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommand:(id)arg1 cardSection:(id)arg2;
- (id)initWithCommand:(id)arg1 cardSection:(id)arg2 result:(id)arg3 button:(id)arg4;
- (id)photosAttributes;
- (id)result;
- (id)resultSection;
- (void)setButton:(id)arg1;
- (void)setCardSection:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setPhotosAttributes:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setResultSection:(id)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (unsigned long long)triggerEvent;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)backingFeedback;

@end
