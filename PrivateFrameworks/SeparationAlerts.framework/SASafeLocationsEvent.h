/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SeparationAlerts.framework/SeparationAlerts
 */

@interface SASafeLocationsEvent : NSObject <TAEventProtocol> {
    NSDate * _date;
    NSDictionary * _safeLocations;
}

@property (nonatomic, readonly, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *safeLocations;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;
- (id)getDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithSafeLocations:(id)arg1 date:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)safeLocations;

@end
