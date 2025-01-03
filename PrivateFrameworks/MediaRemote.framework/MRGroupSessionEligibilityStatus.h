/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGroupSessionEligibilityStatus : NSObject <NSCopying, NSSecureCoding> {
    MRMediaUserState * _currentMediaUserState;
    bool  _idsAccountIsValid;
    bool  _isEligibleForHostingGroupSession;
    bool  _isEligibleForHostingGroupSessionExcludingAcknowledgements;
    bool  _isEligibleForJoiningGroupSession;
    bool  _isManateeEnabled;
    unsigned long long  _mediaAccountHostingState;
    unsigned long long  _mediaAccountJoiningState;
    NSArray * _mediaUserStates;
    bool  _routeIsValidForHosting;
    unsigned char  _routeType;
}

@property (nonatomic, retain) MRMediaUserState *currentMediaUserState;
@property (nonatomic) bool idsAccountIsValid;
@property (nonatomic) bool isEligibleForHostingGroupSession;
@property (nonatomic) bool isEligibleForHostingGroupSessionExcludingAcknowledgements;
@property (nonatomic) bool isEligibleForJoiningGroupSession;
@property (nonatomic) bool isManateeEnabled;
@property (nonatomic) unsigned long long mediaAccountHostingState;
@property (nonatomic) unsigned long long mediaAccountJoiningState;
@property (nonatomic, retain) NSArray *mediaUserStates;
@property (nonatomic) bool routeIsValidForHosting;
@property (nonatomic) unsigned char routeType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentMediaUserState;
- (id)description;
- (id)dictionaryDescription;
- (id)differenceFrom:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)idsAccountIsValid;
- (id)initWithCoder:(id)arg1;
- (bool)isEligibleForHostingGroupSession;
- (bool)isEligibleForHostingGroupSessionExcludingAcknowledgements;
- (bool)isEligibleForJoiningGroupSession;
- (bool)isEqual:(id)arg1;
- (bool)isManateeEnabled;
- (unsigned long long)mediaAccountHostingState;
- (unsigned long long)mediaAccountJoiningState;
- (id)mediaUserStates;
- (bool)routeIsValidForHosting;
- (unsigned char)routeType;
- (void)setCurrentMediaUserState:(id)arg1;
- (void)setIdsAccountIsValid:(bool)arg1;
- (void)setIsEligibleForHostingGroupSession:(bool)arg1;
- (void)setIsEligibleForHostingGroupSessionExcludingAcknowledgements:(bool)arg1;
- (void)setIsEligibleForJoiningGroupSession:(bool)arg1;
- (void)setIsManateeEnabled:(bool)arg1;
- (void)setMediaAccountHostingState:(unsigned long long)arg1;
- (void)setMediaAccountJoiningState:(unsigned long long)arg1;
- (void)setMediaUserStates:(id)arg1;
- (void)setRouteIsValidForHosting:(bool)arg1;
- (void)setRouteType:(unsigned char)arg1;

@end
