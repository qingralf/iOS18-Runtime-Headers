/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
 */

@interface BlastDoorRelayGroupMutationMessage : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  relayGroupMutationMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *destinationCallerID;
@property (nonatomic, readonly) bool fromMe;
@property (nonatomic, readonly) BlastDoorGroupID *groupID;
@property (nonatomic, readonly) NSUUID *guid;
@property (nonatomic, readonly) BlastDoorRelayGroupMutationWrapper *mutation;
@property (nonatomic, readonly) BlastDoorGroupID *originalGroupID;
@property (nonatomic, readonly) NSString *sender;
@property (nonatomic, readonly) NSString *service;

- (void).cxx_destruct;
- (id)description;
- (id)destinationCallerID;
- (bool)fromMe;
- (id)groupID;
- (id)guid;
- (id)init;
- (id)mutation;
- (id)originalGroupID;
- (id)sender;
- (id)service;

@end
