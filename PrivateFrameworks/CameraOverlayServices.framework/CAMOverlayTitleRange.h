/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraOverlayServices.framework/CameraOverlayServices
 */

@interface CAMOverlayTitleRange : NSObject <CAMOverlayDiscreteValueRange, NSSecureCoding> {
    NSArray * __titles;
}

@property (nonatomic, readonly, copy) NSArray *_titles;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (getter=isDiscrete, nonatomic, readonly) bool discrete;
@property (getter=isFloatingPoint, nonatomic, readonly) bool floatingPoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CAMOverlayIndexedRange *indexedRange;
@property (nonatomic, readonly) unsigned long long rangeType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long valueType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_titles;
- (bool)containsValue:(id)arg1;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)indexOfValue:(id)arg1;
- (id)indexedRange;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitles:(id)arg1;
- (bool)isDiscrete;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRange:(id)arg1;
- (bool)isFloatingPoint;
- (bool)isValueExpectedType:(id)arg1;
- (unsigned long long)rangeType;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)valueType;

@end