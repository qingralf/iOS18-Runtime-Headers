/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARConnectionSession : NSObject <NSSecureCoding> {
    NSArray * _events;
    NSUUID * _sessionIdentifier;
    NSString * _transportType;
    NSDictionary * _vehicleInformation;
}

@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) NSUUID *sessionIdentifier;
@property (nonatomic, readonly) NSString *transportType;
@property (nonatomic, readonly) NSDictionary *vehicleInformation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allEventsOfTypes:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)events;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvents:(id)arg1 sessionIdentifier:(id)arg2 vehicleInformation:(id)arg3;
- (id)sessionIdentifier;
- (id)transportType;
- (id)vehicleInformation;

@end
