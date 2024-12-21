/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation
 */

@interface GCDevicePhysicalInputCapacitiveDirectionPadElementDescription : GCDevicePhysicalInputClickableDirectionPadElementDescription <NSSecureCoding> {
    unsigned long long  _eventTouchedValueField;
    NSArray * _touchedSources;
}

@property (nonatomic) unsigned long long eventTouchedValueField;
@property (nonatomic, copy) NSArray *touchedSources;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventTouchedValueField;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setEventTouchedValueField:(unsigned long long)arg1;
- (void)setTouchedSources:(id)arg1;
- (id)touchedSources;

// Image: /System/Library/Frameworks/GameController.framework/GameController

+ (Class)parametersClass;

- (id)makeParameters;

@end