/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation
 */

@interface GCDevicePhysicalInputSymbolDescription : NSObject <GCPhysicalInputSymbol, NSCopying, NSSecureCoding> {
    NSString * _sfSymbolsName;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *sfSymbolsName;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;
+ (id)symbolWithSFSymbolsName:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSFSymbolsName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (id)sfSymbolsName;

@end
