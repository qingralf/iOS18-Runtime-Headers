/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQPStyleReader : NSObject <GQPObjectHandler, GQPObjectReader> {
    int  mCurrentProperty;
    struct __CFArray { } * mEntries;
    char * mIdentifier;
    char * mParentIdentifier;
    GQDSStyle * mStyle;
    bool  mStyleIdentiferEqualsParentIdentifier;
    bool  mStyleIsIdentified;
    int  mStyleType;
    GQDSStylesheet * mStylesheet;
    char * mUid;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (bool)beginProperty:(const char *)arg1;
- (int)beginReadingFromReader:(struct _xmlTextReader { }*)arg1 processor:(id)arg2;
- (id)createStyle;
- (void)dealloc;
- (void)doneProperty;
- (int)doneReading:(id)arg1;
- (void)handleBoolValue:(bool)arg1;
- (void)handleDoubleValue:(double)arg1;
- (void)handleFloatValue:(float)arg1;
- (void)handleIntValue:(int)arg1;
- (void)handleObject:(id)arg1;
- (id)initWithStyleType:(int)arg1;

@end
