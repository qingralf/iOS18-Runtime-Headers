/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPNearbyInvitationDevice : RPEndpoint <NSSecureCoding> {
    unsigned char  _deviceColor;
    bool  _inBubble;
    bool  _wasTriggered;
}

@property (nonatomic, readonly) unsigned char deviceColor;
@property (nonatomic) bool inBubble;
@property (nonatomic) bool wasTriggered;

+ (bool)supportsSecureCoding;

- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (unsigned char)deviceColor;
- (void)encodeWithCoder:(id)arg1;
- (bool)inBubble;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (void)setInBubble:(bool)arg1;
- (void)setWasTriggered:(bool)arg1;
- (unsigned int)updateWithEndpoint:(id)arg1;
- (unsigned int)updateWithSFDevice:(id)arg1;
- (bool)wasTriggered;

@end