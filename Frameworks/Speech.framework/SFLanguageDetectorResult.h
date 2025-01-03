/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface SFLanguageDetectorResult : NSObject {
    NSArray * _alternatives;
    NSString * _detectedLanguageCode;
    NSLocale * _dominantLocale;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _range;
}

@property (nonatomic, readonly, copy) NSArray *alternatives;
@property (nonatomic, readonly, copy) NSString *detectedLanguageCode;
@property (nonatomic, readonly, copy) NSLocale *dominantLocale;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } range;

- (void).cxx_destruct;
- (id)alternatives;
- (id)detectedLanguageCode;
- (id)dominantLocale;
- (id)initWithRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 dominantLocale:(id)arg2 alternatives:(id)arg3 detectedLanguageCode:(id)arg4;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })range;

@end
