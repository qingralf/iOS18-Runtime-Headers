/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FSKit.framework/FSKit
 */

@interface FSVolumeDescription : NSObject <NSSecureCoding> {
    FSVolumeIdentifier * _volumeID;
    FSFileName * _volumeName;
    long long  _volumeState;
}

@property (readonly, copy) FSVolumeIdentifier *volumeID;
@property (readonly, copy) FSFileName *volumeName;
@property (readonly) long long volumeState;

+ (bool)supportsSecureCoding;
+ (id)volumeDescriptionWithID:(id)arg1 name:(id)arg2 state:(long long)arg3;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 name:(id)arg2 state:(long long)arg3;
- (id)volumeID;
- (id)volumeName;
- (long long)volumeState;

@end