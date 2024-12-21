/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
 */

@interface _BlastDoorCKDeviceToDeviceShareInvitationToken : NSObject <NSCopying, NSSecureCoding> {
    NSString * _participantID;
    NSURL * _shareURL;
    NSData * _sharingInvitationData;
}

@property (nonatomic, copy) NSString *participantID;
@property (nonatomic, copy) NSURL *shareURL;
@property (nonatomic, copy) NSData *sharingInvitationData;

+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSharingInvitationData:(id)arg1 shareURL:(id)arg2;
- (id)initWithSharingInvitationData:(id)arg1 shareURL:(id)arg2 participantID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)participantID;
- (void)setParticipantID:(id)arg1;
- (void)setShareURL:(id)arg1;
- (void)setSharingInvitationData:(id)arg1;
- (id)shareURL;
- (id)sharingInvitationData;

@end