/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMSimulatedMessage : NSObject <IMRemoteObjectCoding, NSSecureCoding> {
    NSString * _chatGUID;
    NSString * _groupID;
    NSArray * _handles;
    IMMessageItem * _item;
    NSString * _lastAddressedHandle;
}

@property (nonatomic, retain) NSString *chatGUID;
@property (nonatomic, retain) NSString *groupID;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, retain) NSArray *handles;
@property (nonatomic, retain) IMMessageItem *item;
@property (nonatomic, retain) NSString *lastAddressedHandle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyDictionaryRepresentation;
- (id)_initWithDictionaryRepresentation:(id)arg1;
- (id)chatGUID;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (id)groupID;
- (id)guid;
- (id)handles;
- (id)initWithCoder:(id)arg1;
- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (id)item;
- (id)lastAddressedHandle;
- (void)setChatGUID:(id)arg1;
- (void)setGroupID:(id)arg1;
- (void)setHandles:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setLastAddressedHandle:(id)arg1;

@end
