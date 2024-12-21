/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventDeferringToken : NSObject <BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;
+ (id)protobufSchema;
+ (bool)supportsSecureCoding;
+ (id)tokenForIdentifierOfCAContext:(unsigned int)arg1;
+ (id)tokenForIdentifierOfCGSConnection:(unsigned int)arg1;
+ (id)tokenForString:(id)arg1;

- (unsigned int)_identifierOfCAContext;
- (unsigned int)_identifierOfCGSConnection;
- (id)_init;
- (bool)_isIdentifierOfCAContext;
- (bool)_isIdentifierOfCGSConnection;
- (bool)_isString;
- (id)_string;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end