/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMomentsMessageSendRequest : NSObject <NSSecureCoding> {
    NSUUID * _conversationID;
    NSSet * _destinationHandles;
    TUHandle * _senderHandle;
    NSUUID * _sessionUUID;
}

@property (nonatomic, readonly, copy) NSUUID *conversationID;
@property (nonatomic, readonly, copy) NSSet *destinationHandles;
@property (nonatomic, readonly, copy) TUHandle *senderHandle;
@property (nonatomic, readonly, copy) NSUUID *sessionUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conversationID;
- (id)destinationHandles;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1 conversationID:(id)arg2 senderHandle:(id)arg3 destinationHandles:(id)arg4;
- (id)senderHandle;
- (id)sessionUUID;

@end
