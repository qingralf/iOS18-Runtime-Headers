/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DeviceSharingServices.framework/DeviceSharingServices
 */

@interface DSSGuestUserRemoteUnlockDevice : NSObject <NSSecureCoding> {
    bool  _isPaired;
    NSString * _modelIdentifier;
    NSString * _name;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) bool isPaired;
@property (nonatomic, readonly) NSString *modelIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 name:(id)arg2 modelIdentifier:(id)arg3 isPaired:(bool)arg4;
- (bool)isPaired;
- (id)modelIdentifier;
- (id)name;
- (id)uniqueIdentifier;

@end