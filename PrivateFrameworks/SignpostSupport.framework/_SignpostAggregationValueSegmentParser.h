/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface _SignpostAggregationValueSegmentParser : NSObject {
    NSString * _group;
    bool  _telemetryEnabled;
    NSString * _type;
    NSString * _unit;
    NSNumber * _value;
}

@property (nonatomic, retain) NSString *group;
@property (nonatomic) bool telemetryEnabled;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSString *unit;
@property (nonatomic, retain) NSNumber *value;

- (void).cxx_destruct;
- (void)_clearFields;
- (id)group;
- (id)processSegment:(id)arg1 placeholderType:(unsigned char)arg2;
- (void)setGroup:(id)arg1;
- (void)setTelemetryEnabled:(bool)arg1;
- (void)setType:(id)arg1;
- (void)setUnit:(id)arg1;
- (void)setValue:(id)arg1;
- (bool)telemetryEnabled;
- (id)type;
- (id)unit;
- (id)value;

@end