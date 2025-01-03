/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
 */

@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate> {
    NSString * _name;
    bool  _shouldBeMinimized;
    bool  _valueIsUserObservable;
    int  _valueRestriction;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSString *name;
@property bool shouldBeMinimized;
@property (readonly) Class superclass;
@property bool valueIsUserObservable;
@property int valueRestriction;

- (oneway void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)markedConstraint;
- (id)name;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldBeMinimized:(bool)arg1;
- (void)setValueIsUserObservable:(bool)arg1;
- (void)setValueRestriction:(int)arg1;
- (bool)shouldBeMinimized;
- (bool)valueIsUserObservable;
- (int)valueRestriction;

@end
