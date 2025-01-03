/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMChatIdentifierUtilities : NSObject

+ (id)_handleBasedPersonCentricIDWithParticipantIDs:(id)arg1;
+ (id)_randomUnverifiedChatIdentifierForGroupChat;
+ (id)generateUnusedChatIdentifierForGroupChatWithServiceName:(id)arg1 chatWithChatIdentifierExists:(id /* block */)arg2;
+ (id)personCentricIDForChatWithGUID:(id)arg1 chatIdentifier:(id)arg2 chatStyle:(unsigned char)arg3 groupID:(id)arg4 displayName:(id)arg5 lastKnownToBeHybrid:(bool)arg6 mergeDisplayNames:(bool)arg7 participantIDs:(id)arg8;

@end
