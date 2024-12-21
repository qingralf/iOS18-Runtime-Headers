/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSEventDeferringChainIdentity : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSMutableCopying, NSSecureCoding> {
    BKSHIDEventDisplay * _display;
    BKSHIDEventDeferringEnvironment * _environment;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BKSHIDEventDisplay *display;
@property (nonatomic, readonly) BKSHIDEventDeferringEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)build:(id /* block */)arg1;
+ (id)new;
+ (id)protobufSchema;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)didFinishProtobufDecodingWithError:(out id*)arg1;
- (id)display;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (unsigned long long)hash;
- (id)init;
- (id)initForProtobufDecoding;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplay:(id)arg1 environment:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end