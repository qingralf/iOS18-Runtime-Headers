/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNSegment : NSObject {
    NSNumber * _end;
    NSNumber * _start;
}

@property (nonatomic, retain) NSNumber *end;
@property (nonatomic, retain) NSNumber *start;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)end;
- (unsigned long long)indexOffsetFrom:(unsigned long long)arg1;
- (id)initWithStart:(long long)arg1 end:(long long)arg2;
- (bool)isValid;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (id)start;

@end
