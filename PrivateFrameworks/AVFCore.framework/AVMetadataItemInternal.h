/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVMetadataItemInternal : NSObject {
    NSString * commonKey;
    NSString * dataType;
    NSDate * discoveryTimestamp;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  duration;
    NSString * extendedLanguageTag;
    NSDictionary * extras;
    NSString * identifier;
    long long  itemIndex;
    <NSObject><NSCopying> * key;
    NSString * keySpace;
    NSString * languageCode;
    NSLocale * locale;
    NSString * preferredStorageLocation;
    bool  preferredStorageLocationWasSet;
    struct OpaqueFigMetadataReader { } * reader;
    NSDate * startDate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  time;
    <NSObject><NSCopying> * value;
}

@end
