#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4512 )
#pragma warning( disable:  4651 )
#pragma warning( disable : 4691 )
#pragma warning( disable : 4723 )
#define SCOPE_NO_UDT
#if defined(COMPILE_NATIVE)
#include "ScopeCommonError.h"
#include "ScopeError.h"
#include "ScopeOperators.h"
#endif
#if defined(COMPILE_MANAGED)
#using <mscorlib.dll>
[assembly: System::Runtime::Versioning::TargetFrameworkAttribute(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")];
#include "ScopeCommonError.h"
#include "SqlManaged.h"
#endif
using namespace ScopeEngine;
enum OperatorUID
{
UID_Extract_0 = 1,
UID_Extract_0_Data0 = 2,
UID_Process_1 = 3,
UID_SV1_Extract_out0 = 4,
UID_Process_2 = 5,
UID_Process_2_Data0 = 6,
UID_Process_3 = 7,
UID_Process_3_Data0 = 8,
UID_Process_4 = 9,
UID_Process_4_Data0 = 10,
UID_Process_5 = 11,
UID_Process_5_Data0 = 12,
UID_Process_6 = 13,
UID_Process_6_Data0 = 14,
UID_Process_7 = 15,
UID_SV2_Process_out0 = 16,
UID_Extract_8 = 17,
UID_Extract_8_Data0 = 18,
UID_Process_9 = 19,
UID_SV3_Extract_out0 = 20,
UID_Process_10 = 21,
UID_Process_10_Data0 = 22,
UID_HashJoin_11 = 23,
UID_HashJoin_11_Data0 = 24,
UID_Process_12 = 25,
UID_SV4_Combine_out0 = 26,
UID_Process_13 = 27,
UID_Process_13_Data0 = 28,
UID_HashJoin_14 = 29,
UID_HashJoin_14_Data0 = 30,
UID_HashJoin_15 = 31,
UID_HashJoin_15_Data0 = 32,
UID_Process_16 = 33,
UID_Process_16_Data0 = 34,
UID_Process_17 = 35,
UID_Process_17_Data0 = 36,
UID_Process_18 = 37,
UID_Process_18_Data0 = 38,
UID_Process_19 = 39,
UID_Process_19_Data0 = 40,
UID_Process_20 = 41,
UID_SV5_Combine_out0 = 42,
UID_Process_21 = 43,
UID_Process_21_Data0 = 44,
UID_HashJoin_22 = 45,
UID_HashJoin_22_Data0 = 46,
UID_Process_23 = 47,
UID_Process_23_Data0 = 48,
UID_HashJoin_24 = 49,
UID_HashJoin_24_Data0 = 50,
UID_Process_25 = 51,
UID_SV6_Combine_out0 = 52,
UID_HashJoin_26 = 53,
UID_HashJoin_26_Data0 = 54,
UID_HashJoin_27 = 55,
UID_HashJoin_27_Data0 = 56,
UID_HashJoin_28 = 57,
UID_HashJoin_28_Data0 = 58,
UID_Process_29 = 59,
UID_Process_29_Data0 = 60,
UID_Process_30 = 61,
UID_Process_30_Data0 = 62,
UID_Process_31 = 63,
UID_Process_31_Data0 = 64,
UID_Process_32 = 65,
UID_Process_32_Data0 = 66,
UID_Process_33 = 67,
UID_Process_33_Data0 = 68,
UID_SV7_Combine_out0 = 69,
UID_HashJoin_11_0,
UID_HashJoin_11_1,
UID_HashJoin_14_0,
UID_HashJoin_14_1,
UID_HashJoin_15_0,
UID_HashJoin_15_1,
UID_HashJoin_22_0,
UID_HashJoin_22_1,
UID_HashJoin_24_0,
UID_HashJoin_24_1,
UID_HashJoin_26_0,
UID_HashJoin_26_1,
UID_HashJoin_27_0,
UID_HashJoin_27_1,
UID_HashJoin_28_0,
UID_HashJoin_28_1,
UID_Process_5_Prefix,
UID_Process_18_Prefix,
UID_Process_31_Prefix,
UID_ParallelUnionAll_Extract_0,
UID_ParallelUnionAll_Extract_8
};
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


//namespace ScopeGeneratedClasses
//{
    // IDs representing UDTs to be used in native code
    enum UserDefinedTypeId
    {
        
    };

#if defined(COMPILE_MANAGED)
// Explicit instantiations for templated functions that are defined in managed code
#endif // defined(COMPILE_MANAGED)


    class Extract_0_Data0
    {
    public:
        FString m_RatingLine;
        Extract_0_Data0();
        Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Extract_0_Data0(const Extract_0_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Extract_0_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Extract_0_Data0 & row)
    {
        os << "\tRatingLine:\t" << row.m_RatingLine << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class SV1_Extract_out0
    {
    public:
        int m_MovieID;
        int m_UserID;
        int m_Rating;
        SV1_Extract_out0();
        SV1_Extract_out0(const SV1_Extract_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV1_Extract_out0(const SV1_Extract_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, SV1_Extract_out0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, SV1_Extract_out0 & row)
    {
        os << "\tMovieID:\t" << row.m_MovieID << endl;
        os << "\tUserID:\t" << row.m_UserID << endl;
        os << "\tRating:\t" << row.m_Rating << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_3_Data0
    {
    public:
        int m_MovieID;
        __int64 m_partialagg2__;
        __int64 m_partialagg3__;
        Process_3_Data0();
        Process_3_Data0(const Process_3_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_3_Data0(const Process_3_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_3_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_3_Data0 & row)
    {
        os << "\tMovieID:\t" << row.m_MovieID << endl;
        os << "\tpartialagg2__:\t" << row.m_partialagg2__ << endl;
        os << "\tpartialagg3__:\t" << row.m_partialagg3__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashAggregatorKey_Process_4
    {
    public:
        int m_MovieID;
        HashAggregatorKey_Process_4();
        HashAggregatorKey_Process_4(const HashAggregatorKey_Process_4 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorKey_Process_4(const HashAggregatorKey_Process_4 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashAggregatorKey_Process_4 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashAggregatorKey_Process_4 & row)
    {
        os << "\tMovieID:\t" << row.m_MovieID << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashAggregatorState_Process_4
    {
    public:
        __int64 m_SUM_partialagg2__;
        __int64 m_UNCHECKED_SUM_partialagg3__;
        HashAggregatorState_Process_4();
        HashAggregatorState_Process_4(const HashAggregatorState_Process_4 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorState_Process_4(const HashAggregatorState_Process_4 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashAggregatorState_Process_4 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashAggregatorState_Process_4 & row)
    {
        os << "\tSUM_partialagg2__:\t" << row.m_SUM_partialagg2__ << endl;
        os << "\tUNCHECKED_SUM_partialagg3__:\t" << row.m_UNCHECKED_SUM_partialagg3__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class SV2_Process_out0
    {
    public:
        NativeNullable<__int64> m_AvgRating;
        int m_MovieID1;
        SV2_Process_out0();
        SV2_Process_out0(const SV2_Process_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV2_Process_out0(const SV2_Process_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, SV2_Process_out0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, SV2_Process_out0 & row)
    {
        os << "\tAvgRating:\t" << row.m_AvgRating << endl;
        os << "\tMovieID1:\t" << row.m_MovieID1 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Extract_8_Data0
    {
    public:
        FString m_UserLine;
        Extract_8_Data0();
        Extract_8_Data0(const Extract_8_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Extract_8_Data0(const Extract_8_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Extract_8_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Extract_8_Data0 & row)
    {
        os << "\tUserLine:\t" << row.m_UserLine << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class SV3_Extract_out0
    {
    public:
        int m_UserID;
        int m_Age;
        int m_Occupation;
        SV3_Extract_out0();
        SV3_Extract_out0(const SV3_Extract_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV3_Extract_out0(const SV3_Extract_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, SV3_Extract_out0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, SV3_Extract_out0 & row)
    {
        os << "\tUserID:\t" << row.m_UserID << endl;
        os << "\tAge:\t" << row.m_Age << endl;
        os << "\tOccupation:\t" << row.m_Occupation << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_10_Data0
    {
    public:
        int m_UserID1;
        int m_Age3;
        int m_Occupation4;
        Process_10_Data0();
        Process_10_Data0(const Process_10_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_10_Data0(const Process_10_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_10_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_10_Data0 & row)
    {
        os << "\tUserID1:\t" << row.m_UserID1 << endl;
        os << "\tAge3:\t" << row.m_Age3 << endl;
        os << "\tOccupation4:\t" << row.m_Occupation4 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashJoin_11_Data0
    {
    public:
        int m_UserID;
        int m_UserID1;
        int m_Age;
        int m_Occupation;
        int m_Age3;
        int m_Occupation4;
        HashJoin_11_Data0();
        HashJoin_11_Data0(const HashJoin_11_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashJoin_11_Data0(const HashJoin_11_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashJoin_11_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashJoin_11_Data0 & row)
    {
        os << "\tUserID:\t" << row.m_UserID << endl;
        os << "\tUserID1:\t" << row.m_UserID1 << endl;
        os << "\tAge:\t" << row.m_Age << endl;
        os << "\tOccupation:\t" << row.m_Occupation << endl;
        os << "\tAge3:\t" << row.m_Age3 << endl;
        os << "\tOccupation4:\t" << row.m_Occupation4 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineKey_HashJoin_11
    {
    public:
        int m_Age3_Age;
        int m_Occupation4_Occupation;
        HashCombineKey_HashJoin_11();
        HashCombineKey_HashJoin_11(const HashCombineKey_HashJoin_11 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_11(const HashCombineKey_HashJoin_11 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_11 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_11 & row)
    {
        os << "\tAge3_Age:\t" << row.m_Age3_Age << endl;
        os << "\tOccupation4_Occupation:\t" << row.m_Occupation4_Occupation << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineValue_HashJoin_11
    {
    public:
        int m_UserID;
        HashCombineValue_HashJoin_11();
        HashCombineValue_HashJoin_11(const HashCombineValue_HashJoin_11 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineValue_HashJoin_11(const HashCombineValue_HashJoin_11 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineValue_HashJoin_11 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineValue_HashJoin_11 & row)
    {
        os << "\tUserID:\t" << row.m_UserID << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class SV4_Combine_out0
    {
    public:
        int m_aUserID;
        int m_bUserID;
        SV4_Combine_out0();
        SV4_Combine_out0(const SV4_Combine_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV4_Combine_out0(const SV4_Combine_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, SV4_Combine_out0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, SV4_Combine_out0 & row)
    {
        os << "\taUserID:\t" << row.m_aUserID << endl;
        os << "\tbUserID:\t" << row.m_bUserID << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_13_Data0
    {
    public:
        int m_MovieID1;
        int m_UserID2;
        int m_Rating3;
        Process_13_Data0();
        Process_13_Data0(const Process_13_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_13_Data0(const Process_13_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_13_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_13_Data0 & row)
    {
        os << "\tMovieID1:\t" << row.m_MovieID1 << endl;
        os << "\tUserID2:\t" << row.m_UserID2 << endl;
        os << "\tRating3:\t" << row.m_Rating3 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashJoin_14_Data0
    {
    public:
        int m_aUserID;
        int m_bUserID;
        int m_MovieID1;
        int m_Rating3;
        HashJoin_14_Data0();
        HashJoin_14_Data0(const HashJoin_14_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashJoin_14_Data0(const HashJoin_14_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashJoin_14_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashJoin_14_Data0 & row)
    {
        os << "\taUserID:\t" << row.m_aUserID << endl;
        os << "\tbUserID:\t" << row.m_bUserID << endl;
        os << "\tMovieID1:\t" << row.m_MovieID1 << endl;
        os << "\tRating3:\t" << row.m_Rating3 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineKey_HashJoin_14
    {
    public:
        int m_UserID2_bUserID;
        HashCombineKey_HashJoin_14();
        HashCombineKey_HashJoin_14(const HashCombineKey_HashJoin_14 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_14(const HashCombineKey_HashJoin_14 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_14 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_14 & row)
    {
        os << "\tUserID2_bUserID:\t" << row.m_UserID2_bUserID << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineValue_HashJoin_14
    {
    public:
        int m_aUserID;
        HashCombineValue_HashJoin_14();
        HashCombineValue_HashJoin_14(const HashCombineValue_HashJoin_14 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineValue_HashJoin_14(const HashCombineValue_HashJoin_14 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineValue_HashJoin_14 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineValue_HashJoin_14 & row)
    {
        os << "\taUserID:\t" << row.m_aUserID << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashJoin_15_Data0
    {
    public:
        int m_aUserID;
        int m_bUserID;
        int m_Rating;
        int m_Rating3;
        HashJoin_15_Data0();
        HashJoin_15_Data0(const HashJoin_15_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashJoin_15_Data0(const HashJoin_15_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashJoin_15_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashJoin_15_Data0 & row)
    {
        os << "\taUserID:\t" << row.m_aUserID << endl;
        os << "\tbUserID:\t" << row.m_bUserID << endl;
        os << "\tRating:\t" << row.m_Rating << endl;
        os << "\tRating3:\t" << row.m_Rating3 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineKey_HashJoin_15
    {
    public:
        int m_MovieID1_MovieID;
        int m_aUserID_UserID;
        HashCombineKey_HashJoin_15();
        HashCombineKey_HashJoin_15(const HashCombineKey_HashJoin_15 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_15(const HashCombineKey_HashJoin_15 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_15 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_15 & row)
    {
        os << "\tMovieID1_MovieID:\t" << row.m_MovieID1_MovieID << endl;
        os << "\taUserID_UserID:\t" << row.m_aUserID_UserID << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineValue_HashJoin_15
    {
    public:
        int m_Rating;
        HashCombineValue_HashJoin_15();
        HashCombineValue_HashJoin_15(const HashCombineValue_HashJoin_15 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineValue_HashJoin_15(const HashCombineValue_HashJoin_15 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineValue_HashJoin_15 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineValue_HashJoin_15 & row)
    {
        os << "\tRating:\t" << row.m_Rating << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_16_Data0
    {
    public:
        int m_aUserID;
        int m_bUserID;
        NativeNullable<__int64> m_partialagg4__;
        NativeNullable<double> m_partialagg5__;
        NativeNullable<double> m_partialagg6__;
        Process_16_Data0();
        Process_16_Data0(const Process_16_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_16_Data0(const Process_16_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_16_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_16_Data0 & row)
    {
        os << "\taUserID:\t" << row.m_aUserID << endl;
        os << "\tbUserID:\t" << row.m_bUserID << endl;
        os << "\tpartialagg4__:\t" << row.m_partialagg4__ << endl;
        os << "\tpartialagg5__:\t" << row.m_partialagg5__ << endl;
        os << "\tpartialagg6__:\t" << row.m_partialagg6__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashAggregatorState_Process_17
    {
    public:
        __int64 m_SUM_partialagg4__;
        bool m_SUM_fEmpty_partialagg4__;
        double m_SUM_partialagg5__;
        bool m_SUM_fEmpty_partialagg5__;
        double m_SUM_partialagg6__;
        bool m_SUM_fEmpty_partialagg6__;
        HashAggregatorState_Process_17();
        HashAggregatorState_Process_17(const HashAggregatorState_Process_17 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorState_Process_17(const HashAggregatorState_Process_17 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashAggregatorState_Process_17 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashAggregatorState_Process_17 & row)
    {
        os << "\tSUM_partialagg4__:\t" << row.m_SUM_partialagg4__ << endl;
        os << "\tSUM_fEmpty_partialagg4__:\t" << row.m_SUM_fEmpty_partialagg4__ << endl;
        os << "\tSUM_partialagg5__:\t" << row.m_SUM_partialagg5__ << endl;
        os << "\tSUM_fEmpty_partialagg5__:\t" << row.m_SUM_fEmpty_partialagg5__ << endl;
        os << "\tSUM_partialagg6__:\t" << row.m_SUM_partialagg6__ << endl;
        os << "\tSUM_fEmpty_partialagg6__:\t" << row.m_SUM_fEmpty_partialagg6__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class SV5_Combine_out0
    {
    public:
        double m_Similarity;
        int m_aUserID;
        int m_bUserID;
        SV5_Combine_out0();
        SV5_Combine_out0(const SV5_Combine_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV5_Combine_out0(const SV5_Combine_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, SV5_Combine_out0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, SV5_Combine_out0 & row)
    {
        os << "\tSimilarity:\t" << row.m_Similarity << endl;
        os << "\taUserID:\t" << row.m_aUserID << endl;
        os << "\tbUserID:\t" << row.m_bUserID << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_21_Data0
    {
    public:
        int m_MovieID;
        int m_UserID;
        Process_21_Data0();
        Process_21_Data0(const Process_21_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_21_Data0(const Process_21_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_21_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_21_Data0 & row)
    {
        os << "\tMovieID:\t" << row.m_MovieID << endl;
        os << "\tUserID:\t" << row.m_UserID << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashJoin_22_Data0
    {
    public:
        int m_aUserID;
        int m_bUserID;
        int m_MovieID;
        HashJoin_22_Data0();
        HashJoin_22_Data0(const HashJoin_22_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashJoin_22_Data0(const HashJoin_22_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashJoin_22_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashJoin_22_Data0 & row)
    {
        os << "\taUserID:\t" << row.m_aUserID << endl;
        os << "\tbUserID:\t" << row.m_bUserID << endl;
        os << "\tMovieID:\t" << row.m_MovieID << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineKey_HashJoin_22
    {
    public:
        int m_UserID_bUserID;
        HashCombineKey_HashJoin_22();
        HashCombineKey_HashJoin_22(const HashCombineKey_HashJoin_22 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_22(const HashCombineKey_HashJoin_22 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_22 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_22 & row)
    {
        os << "\tUserID_bUserID:\t" << row.m_UserID_bUserID << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_23_Data0
    {
    public:
        int m_MovieID1;
        int m_UserID2;
        Process_23_Data0();
        Process_23_Data0(const Process_23_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_23_Data0(const Process_23_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_23_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_23_Data0 & row)
    {
        os << "\tMovieID1:\t" << row.m_MovieID1 << endl;
        os << "\tUserID2:\t" << row.m_UserID2 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineKey_HashJoin_24
    {
    public:
        int m_aUserID_UserID2;
        int m_MovieID_MovieID1;
        HashCombineKey_HashJoin_24();
        HashCombineKey_HashJoin_24(const HashCombineKey_HashJoin_24 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_24(const HashCombineKey_HashJoin_24 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_24 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_24 & row)
    {
        os << "\taUserID_UserID2:\t" << row.m_aUserID_UserID2 << endl;
        os << "\tMovieID_MovieID1:\t" << row.m_MovieID_MovieID1 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineValue_HashJoin_24
    {
    public:
        HashCombineValue_HashJoin_24();
        HashCombineValue_HashJoin_24(const HashCombineValue_HashJoin_24 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineValue_HashJoin_24(const HashCombineValue_HashJoin_24 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineValue_HashJoin_24 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineValue_HashJoin_24 & row)
    {
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class SV6_Combine_out0
    {
    public:
        int m_UnseenMovieID;
        int m_aUserID2;
        int m_bUserID3;
        SV6_Combine_out0();
        SV6_Combine_out0(const SV6_Combine_out0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        SV6_Combine_out0(const SV6_Combine_out0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, SV6_Combine_out0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, SV6_Combine_out0 & row)
    {
        os << "\tUnseenMovieID:\t" << row.m_UnseenMovieID << endl;
        os << "\taUserID2:\t" << row.m_aUserID2 << endl;
        os << "\tbUserID3:\t" << row.m_bUserID3 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashJoin_26_Data0
    {
    public:
        int m_aUserID;
        double m_Similarity;
        int m_UnseenMovieID;
        int m_bUserID3;
        HashJoin_26_Data0();
        HashJoin_26_Data0(const HashJoin_26_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashJoin_26_Data0(const HashJoin_26_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashJoin_26_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashJoin_26_Data0 & row)
    {
        os << "\taUserID:\t" << row.m_aUserID << endl;
        os << "\tSimilarity:\t" << row.m_Similarity << endl;
        os << "\tUnseenMovieID:\t" << row.m_UnseenMovieID << endl;
        os << "\tbUserID3:\t" << row.m_bUserID3 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineKey_HashJoin_26
    {
    public:
        int m_aUserID2_aUserID;
        int m_bUserID3_bUserID;
        HashCombineKey_HashJoin_26();
        HashCombineKey_HashJoin_26(const HashCombineKey_HashJoin_26 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_26(const HashCombineKey_HashJoin_26 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_26 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_26 & row)
    {
        os << "\taUserID2_aUserID:\t" << row.m_aUserID2_aUserID << endl;
        os << "\tbUserID3_bUserID:\t" << row.m_bUserID3_bUserID << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineValue_HashJoin_26
    {
    public:
        double m_Similarity;
        HashCombineValue_HashJoin_26();
        HashCombineValue_HashJoin_26(const HashCombineValue_HashJoin_26 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineValue_HashJoin_26(const HashCombineValue_HashJoin_26 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineValue_HashJoin_26 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineValue_HashJoin_26 & row)
    {
        os << "\tSimilarity:\t" << row.m_Similarity << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashJoin_27_Data0
    {
    public:
        int m_aUserID;
        double m_Similarity;
        NativeNullable<__int64> m_AvgRating;
        int m_MovieID1;
        int m_UnseenMovieID;
        int m_bUserID3;
        HashJoin_27_Data0();
        HashJoin_27_Data0(const HashJoin_27_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashJoin_27_Data0(const HashJoin_27_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashJoin_27_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashJoin_27_Data0 & row)
    {
        os << "\taUserID:\t" << row.m_aUserID << endl;
        os << "\tSimilarity:\t" << row.m_Similarity << endl;
        os << "\tAvgRating:\t" << row.m_AvgRating << endl;
        os << "\tMovieID1:\t" << row.m_MovieID1 << endl;
        os << "\tUnseenMovieID:\t" << row.m_UnseenMovieID << endl;
        os << "\tbUserID3:\t" << row.m_bUserID3 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineKey_HashJoin_27
    {
    public:
        int m_UnseenMovieID_MovieID1;
        HashCombineKey_HashJoin_27();
        HashCombineKey_HashJoin_27(const HashCombineKey_HashJoin_27 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_27(const HashCombineKey_HashJoin_27 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_27 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_27 & row)
    {
        os << "\tUnseenMovieID_MovieID1:\t" << row.m_UnseenMovieID_MovieID1 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineValue_HashJoin_27
    {
    public:
        NativeNullable<__int64> m_AvgRating;
        HashCombineValue_HashJoin_27();
        HashCombineValue_HashJoin_27(const HashCombineValue_HashJoin_27 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineValue_HashJoin_27(const HashCombineValue_HashJoin_27 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineValue_HashJoin_27 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineValue_HashJoin_27 & row)
    {
        os << "\tAvgRating:\t" << row.m_AvgRating << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashJoin_28_Data0
    {
    public:
        int m_aUserID;
        double m_Similarity;
        NativeNullable<__int64> m_AvgRating;
        int m_MovieID1;
        HashJoin_28_Data0();
        HashJoin_28_Data0(const HashJoin_28_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashJoin_28_Data0(const HashJoin_28_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashJoin_28_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashJoin_28_Data0 & row)
    {
        os << "\taUserID:\t" << row.m_aUserID << endl;
        os << "\tSimilarity:\t" << row.m_Similarity << endl;
        os << "\tAvgRating:\t" << row.m_AvgRating << endl;
        os << "\tMovieID1:\t" << row.m_MovieID1 << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashCombineKey_HashJoin_28
    {
    public:
        int m_bUserID3_UserID;
        int m_UnseenMovieID_MovieID;
        HashCombineKey_HashJoin_28();
        HashCombineKey_HashJoin_28(const HashCombineKey_HashJoin_28 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashCombineKey_HashJoin_28(const HashCombineKey_HashJoin_28 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashCombineKey_HashJoin_28 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashCombineKey_HashJoin_28 & row)
    {
        os << "\tbUserID3_UserID:\t" << row.m_bUserID3_UserID << endl;
        os << "\tUnseenMovieID_MovieID:\t" << row.m_UnseenMovieID_MovieID << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_29_Data0
    {
    public:
        int m_aUserID;
        FString m_partialagg7__;
        Process_29_Data0();
        Process_29_Data0(const Process_29_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_29_Data0(const Process_29_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_29_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_29_Data0 & row)
    {
        os << "\taUserID:\t" << row.m_aUserID << endl;
        os << "\tpartialagg7__:\t" << row.m_partialagg7__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class HashAggregatorState_Process_30
    {
    public:
        FString m_MAX_partialagg7__;
        HashAggregatorState_Process_30();
        HashAggregatorState_Process_30(const HashAggregatorState_Process_30 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        HashAggregatorState_Process_30(const HashAggregatorState_Process_30 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, HashAggregatorState_Process_30 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, HashAggregatorState_Process_30 & row)
    {
        os << "\tMAX_partialagg7__:\t" << row.m_MAX_partialagg7__ << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


    class Process_33_Data0
    {
    public:
        int m_aUserID;
        FString m_MaxString;
        Process_33_Data0();
        Process_33_Data0(const Process_33_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_33_Data0(const Process_33_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }
        
#if defined(SCOPE_DEBUG)
        friend ostream & operator<<(ostream & os, Process_33_Data0 & row);
#endif // defined(SCOPE_DEBUG)
    };

#if defined(SCOPE_DEBUG)
    INLINE ostream & operator<<(ostream & os, Process_33_Data0 & row)
    {
        os << "\taUserID:\t" << row.m_aUserID << endl;
        os << "\tMaxString:\t" << row.m_MaxString << endl;
        return os;
    }
#endif // defined(SCOPE_DEBUG)


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedRow<Extract_0_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(1);            
            offset[0] = ColumnOffsetId(offsetof(Extract_0_Data0, m_RatingLine), T_String);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(1);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn("RatingLine", System::String::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "RatingLine") >= 0);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            ISchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Extract_0_Data0>::ComplexColumnGetter, &ManagedRow<Extract_0_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        IRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<IRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Extract_0_Data0>;    
    template<>
    struct ManagedRow<SV1_Extract_out0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(3);            
            offset[0] = ColumnOffsetId(offsetof(SV1_Extract_out0, m_MovieID), T_Integer);
            offset[1] = ColumnOffsetId(offsetof(SV1_Extract_out0, m_UserID), T_Integer);
            offset[2] = ColumnOffsetId(offsetof(SV1_Extract_out0, m_Rating), T_Integer);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(3);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn("MovieID", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "MovieID") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn("UserID", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "UserID") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn("Rating", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "Rating") >= 0);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            ISchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<SV1_Extract_out0>::ComplexColumnGetter, &ManagedRow<SV1_Extract_out0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        IRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<IRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<SV1_Extract_out0>;    
    template<>
    struct ManagedRow<Extract_8_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(1);            
            offset[0] = ColumnOffsetId(offsetof(Extract_8_Data0, m_UserLine), T_String);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(1);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn("UserLine", System::String::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "UserLine") >= 0);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            ISchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Extract_8_Data0>::ComplexColumnGetter, &ManagedRow<Extract_8_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        IRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<IRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Extract_8_Data0>;    
    template<>
    struct ManagedRow<SV3_Extract_out0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(3);            
            offset[0] = ColumnOffsetId(offsetof(SV3_Extract_out0, m_UserID), T_Integer);
            offset[1] = ColumnOffsetId(offsetof(SV3_Extract_out0, m_Age), T_Integer);
            offset[2] = ColumnOffsetId(offsetof(SV3_Extract_out0, m_Occupation), T_Integer);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(3);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn("UserID", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "UserID") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn("Age", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "Age") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn("Occupation", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "Occupation") >= 0);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            ISchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<SV3_Extract_out0>::ComplexColumnGetter, &ManagedRow<SV3_Extract_out0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        IRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<IRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<SV3_Extract_out0>;    
    template<>
    struct ManagedRow<HashJoin_15_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(4);            
            offset[0] = ColumnOffsetId(offsetof(HashJoin_15_Data0, m_aUserID), T_Integer);
            offset[1] = ColumnOffsetId(offsetof(HashJoin_15_Data0, m_bUserID), T_Integer);
            offset[2] = ColumnOffsetId(offsetof(HashJoin_15_Data0, m_Rating), T_Integer);
            offset[3] = ColumnOffsetId(offsetof(HashJoin_15_Data0, m_Rating3), T_Integer);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(4);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn("aUserID", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "aUserID") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn("bUserID", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "bUserID") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn("Rating", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "Rating") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[3] = gcnew ScopeEngineManaged::SqlIpColumn("Rating3", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "Rating3") >= 0);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            ISchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<HashJoin_15_Data0>::ComplexColumnGetter, &ManagedRow<HashJoin_15_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        IRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<IRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<HashJoin_15_Data0>;    
    template<>
    struct ManagedRow<Process_16_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(5);            
            offset[0] = ColumnOffsetId(offsetof(Process_16_Data0, m_aUserID), T_Integer);
            offset[1] = ColumnOffsetId(offsetof(Process_16_Data0, m_bUserID), T_Integer);
            offset[2] = ColumnOffsetId(offsetof(Process_16_Data0, m_partialagg4__), T_LongQ);
            offset[3] = ColumnOffsetId(offsetof(Process_16_Data0, m_partialagg5__), T_DoubleQ);
            offset[4] = ColumnOffsetId(offsetof(Process_16_Data0, m_partialagg6__), T_DoubleQ);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(5);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn("aUserID", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "aUserID") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn("bUserID", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "bUserID") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn("partialagg4__", System::Nullable<System::Int64>::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "partialagg4__") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[3] = gcnew ScopeEngineManaged::SqlIpColumn("partialagg5__", System::Nullable<System::Double>::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "partialagg5__") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[4] = gcnew ScopeEngineManaged::SqlIpColumn("partialagg6__", System::Nullable<System::Double>::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "partialagg6__") >= 0);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            ISchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Process_16_Data0>::ComplexColumnGetter, &ManagedRow<Process_16_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        IRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<IRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Process_16_Data0>;    
    template<>
    struct ManagedRow<SV5_Combine_out0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(3);            
            offset[0] = ColumnOffsetId(offsetof(SV5_Combine_out0, m_Similarity), T_Double);
            offset[1] = ColumnOffsetId(offsetof(SV5_Combine_out0, m_aUserID), T_Integer);
            offset[2] = ColumnOffsetId(offsetof(SV5_Combine_out0, m_bUserID), T_Integer);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(3);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn("Similarity", System::Double::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "Similarity") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn("aUserID", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "aUserID") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn("bUserID", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "bUserID") >= 0);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            ISchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<SV5_Combine_out0>::ComplexColumnGetter, &ManagedRow<SV5_Combine_out0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        IRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<IRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<SV5_Combine_out0>;    
    template<>
    struct ManagedRow<HashJoin_28_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(4);            
            offset[0] = ColumnOffsetId(offsetof(HashJoin_28_Data0, m_aUserID), T_Integer);
            offset[1] = ColumnOffsetId(offsetof(HashJoin_28_Data0, m_Similarity), T_Double);
            offset[2] = ColumnOffsetId(offsetof(HashJoin_28_Data0, m_AvgRating), T_LongQ);
            offset[3] = ColumnOffsetId(offsetof(HashJoin_28_Data0, m_MovieID1), T_Integer);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(4);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn("aUserID", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "aUserID") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn("Similarity", System::Double::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "Similarity") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn("AvgRating", System::Nullable<System::Int64>::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "AvgRating") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[3] = gcnew ScopeEngineManaged::SqlIpColumn("MovieID1", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "MovieID1") >= 0);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            ISchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<HashJoin_28_Data0>::ComplexColumnGetter, &ManagedRow<HashJoin_28_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        IRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<IRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<HashJoin_28_Data0>;    
    template<>
    struct ManagedRow<Process_29_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(2);            
            offset[0] = ColumnOffsetId(offsetof(Process_29_Data0, m_aUserID), T_Integer);
            offset[1] = ColumnOffsetId(offsetof(Process_29_Data0, m_partialagg7__), T_String);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(2);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn("aUserID", System::Int32::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "aUserID") >= 0);
            // field has the internal csharp valid identifier instead of the original identifier, make sure we do reverse lookup before codegen so the internal identifier doesn't leak to the user
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn("partialagg7__", System::String::typeid, readOnlyColumns == nullptr ? false : Array::BinarySearch(readOnlyColumns, "partialagg7__") >= 0);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            ISchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Process_29_Data0>::ComplexColumnGetter, &ManagedRow<Process_29_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        IRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<IRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Process_29_Data0>;    

#endif // defined(COMPILE_MANAGED)

//}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV1_Extract_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV1_Extract_out0 & row)
        {
            try
            {
                input->Read(row.m_MovieID);
                input->Read(row.m_UserID);
                input->Read(row.m_Rating);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV1_Extract_out0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, SV1_Extract_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_MovieID);
            output->Write(row.m_UserID);
            output->Write(row.m_Rating);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const SV1_Extract_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV1_Extract_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV2_Process_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV2_Process_out0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_AvgRating);
                    input->Read(row.m_MovieID1);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_AvgRating);
                    }
                    else
                    {
                        row.m_AvgRating.SetNull();
                    }
                    input->Read(row.m_MovieID1);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV2_Process_out0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, SV2_Process_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_AvgRating.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            if (!row.m_AvgRating.IsNull())
            {
                output->Write(row.m_AvgRating);
            }
            output->Write(row.m_MovieID1);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const SV2_Process_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV2_Process_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_3_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_3_Data0 & row)
        {
            try
            {
                input->Read(row.m_MovieID);
                input->Read(row.m_partialagg2__);
                input->Read(row.m_partialagg3__);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_3_Data0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, Process_3_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_MovieID);
            output->Write(row.m_partialagg2__);
            output->Write(row.m_partialagg3__);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const Process_3_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_3_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV3_Extract_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV3_Extract_out0 & row)
        {
            try
            {
                input->Read(row.m_UserID);
                input->Read(row.m_Age);
                input->Read(row.m_Occupation);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV3_Extract_out0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, SV3_Extract_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_UserID);
            output->Write(row.m_Age);
            output->Write(row.m_Occupation);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const SV3_Extract_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV3_Extract_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV4_Combine_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV4_Combine_out0 & row)
        {
            try
            {
                input->Read(row.m_aUserID);
                input->Read(row.m_bUserID);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV4_Combine_out0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, SV4_Combine_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_aUserID);
            output->Write(row.m_bUserID);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const SV4_Combine_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV4_Combine_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_10_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_10_Data0 & row)
        {
            try
            {
                input->Read(row.m_UserID1);
                input->Read(row.m_Age3);
                input->Read(row.m_Occupation4);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_10_Data0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, Process_10_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_UserID1);
            output->Write(row.m_Age3);
            output->Write(row.m_Occupation4);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const Process_10_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_10_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV5_Combine_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV5_Combine_out0 & row)
        {
            try
            {
                input->Read(row.m_Similarity);
                input->Read(row.m_aUserID);
                input->Read(row.m_bUserID);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV5_Combine_out0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, SV5_Combine_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_Similarity);
            output->Write(row.m_aUserID);
            output->Write(row.m_bUserID);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const SV5_Combine_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV5_Combine_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_13_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_13_Data0 & row)
        {
            try
            {
                input->Read(row.m_MovieID1);
                input->Read(row.m_UserID2);
                input->Read(row.m_Rating3);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_13_Data0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, Process_13_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_MovieID1);
            output->Write(row.m_UserID2);
            output->Write(row.m_Rating3);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const Process_13_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_13_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<HashJoin_14_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, HashJoin_14_Data0 & row)
        {
            try
            {
                input->Read(row.m_aUserID);
                input->Read(row.m_bUserID);
                input->Read(row.m_MovieID1);
                input->Read(row.m_Rating3);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<HashJoin_14_Data0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, HashJoin_14_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_aUserID);
            output->Write(row.m_bUserID);
            output->Write(row.m_MovieID1);
            output->Write(row.m_Rating3);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const HashJoin_14_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const HashJoin_14_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_16_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_16_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_aUserID);
                    input->Read(row.m_bUserID);
                    input->Read(row.m_partialagg4__);
                    input->Read(row.m_partialagg5__);
                    input->Read(row.m_partialagg6__);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_aUserID);
                    input->Read(row.m_bUserID);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_partialagg4__);
                    }
                    else
                    {
                        row.m_partialagg4__.SetNull();
                    }
                    if ((___masking___[0] & 4 ) != 4)
                    {
                        input->Read(row.m_partialagg5__);
                    }
                    else
                    {
                        row.m_partialagg5__.SetNull();
                    }
                    if ((___masking___[0] & 8 ) != 8)
                    {
                        input->Read(row.m_partialagg6__);
                    }
                    else
                    {
                        row.m_partialagg6__.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_16_Data0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, Process_16_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_partialagg4__.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (row.m_partialagg5__.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 4;
            }
            if (row.m_partialagg6__.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 8;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_aUserID);
            output->Write(row.m_bUserID);
            if (!row.m_partialagg4__.IsNull())
            {
                output->Write(row.m_partialagg4__);
            }
            if (!row.m_partialagg5__.IsNull())
            {
                output->Write(row.m_partialagg5__);
            }
            if (!row.m_partialagg6__.IsNull())
            {
                output->Write(row.m_partialagg6__);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const Process_16_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_16_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<SV6_Combine_out0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, SV6_Combine_out0 & row)
        {
            try
            {
                input->Read(row.m_UnseenMovieID);
                input->Read(row.m_aUserID2);
                input->Read(row.m_bUserID3);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<SV6_Combine_out0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, SV6_Combine_out0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_UnseenMovieID);
            output->Write(row.m_aUserID2);
            output->Write(row.m_bUserID3);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const SV6_Combine_out0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const SV6_Combine_out0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_21_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_21_Data0 & row)
        {
            try
            {
                input->Read(row.m_MovieID);
                input->Read(row.m_UserID);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_21_Data0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, Process_21_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_MovieID);
            output->Write(row.m_UserID);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const Process_21_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_21_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<HashJoin_22_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, HashJoin_22_Data0 & row)
        {
            try
            {
                input->Read(row.m_aUserID);
                input->Read(row.m_bUserID);
                input->Read(row.m_MovieID);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<HashJoin_22_Data0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, HashJoin_22_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_aUserID);
            output->Write(row.m_bUserID);
            output->Write(row.m_MovieID);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const HashJoin_22_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const HashJoin_22_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_23_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_23_Data0 & row)
        {
            try
            {
                input->Read(row.m_MovieID1);
                input->Read(row.m_UserID2);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_23_Data0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, Process_23_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_MovieID1);
            output->Write(row.m_UserID2);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const Process_23_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_23_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<HashJoin_26_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, HashJoin_26_Data0 & row)
        {
            try
            {
                input->Read(row.m_aUserID);
                input->Read(row.m_Similarity);
                input->Read(row.m_UnseenMovieID);
                input->Read(row.m_bUserID3);
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<HashJoin_26_Data0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, HashJoin_26_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            output->Write(row.m_aUserID);
            output->Write(row.m_Similarity);
            output->Write(row.m_UnseenMovieID);
            output->Write(row.m_bUserID3);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const HashJoin_26_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const HashJoin_26_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<HashJoin_27_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, HashJoin_27_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_aUserID);
                    input->Read(row.m_Similarity);
                    input->Read(row.m_AvgRating);
                    input->Read(row.m_MovieID1);
                    input->Read(row.m_UnseenMovieID);
                    input->Read(row.m_bUserID3);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_aUserID);
                    input->Read(row.m_Similarity);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_AvgRating);
                    }
                    else
                    {
                        row.m_AvgRating.SetNull();
                    }
                    input->Read(row.m_MovieID1);
                    input->Read(row.m_UnseenMovieID);
                    input->Read(row.m_bUserID3);
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<HashJoin_27_Data0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, HashJoin_27_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_AvgRating.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_aUserID);
            output->Write(row.m_Similarity);
            if (!row.m_AvgRating.IsNull())
            {
                output->Write(row.m_AvgRating);
            }
            output->Write(row.m_MovieID1);
            output->Write(row.m_UnseenMovieID);
            output->Write(row.m_bUserID3);
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const HashJoin_27_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const HashJoin_27_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class BinaryExtractPolicy<Process_29_Data0>
    {
    public:
        static bool Deserialize(BinaryInputStream * input, Process_29_Data0 & row)
        {
            try
            {
                char b = 0;
                input->Read(b);
                if (b==0)
                {
                    input->Read(row.m_aUserID);
                    input->Read(row.m_partialagg7__);
                }
                else
                {
                    char ___masking___[1];
                    ___masking___[0] = b;
                    input->Read(row.m_aUserID);
                    if ((___masking___[0] & 2 ) != 2)
                    {
                        input->Read(row.m_partialagg7__);
                    }
                    else
                    {
                        row.m_partialagg7__.SetNull();
                    }
                }
            }
            catch (ScopeStreamException &) 
            {
                // we reach the end of file
                return false;
            }

            return true;
        }
    };
#endif // defined(COMPILE_NATIVE)

    template<> 
    class BinaryOutputPolicy<Process_29_Data0>
    {
    public:
        static void Serialize(BinaryOutputStream * output, Process_29_Data0 & row)
        {
            SIZE_T rowStart =  output->GetOutputer().GetCurrentPosition();
            char b = 0;
            char ___masking___[1];
            ___masking___[0] = 1;
            bool hasNull = false;
            if (row.m_partialagg7__.IsNull())
            {
                hasNull = true;
                ___masking___[0] |= 2;
            }
            if (hasNull)
            {
                output->Write(___masking___[0]);
            }
            else
            {
                output->Write(b);
            }
            output->Write(row.m_aUserID);
            if (!row.m_partialagg7__.IsNull())
            {
                output->Write(row.m_partialagg7__);
            }
            SIZE_T rowSize =  output->GetOutputer().GetCurrentPosition() - rowStart;
            SCOPE_ASSERT(rowSize <= ScopeEngine::Configuration::GetGlobal().GetMaxOnDiskRowSize());
        }
        static void Serialize(DummyOutputStream * output, const Process_29_Data0 & row)
        {
            SCOPE_ASSERT(false); 
        }
            static void SerializeKeyForSS(MemoryOutputStream* output, const Process_29_Data0 & row)
            {
                SCOPE_ASSERT(false); // there is no partition key in the schema
            }
    };

#pragma region Schema Constructors
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Extract_0_Data0::Extract_0_Data0()
    {
    }
    INLINE Extract_0_Data0::Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc) :
            m_RatingLine(c.m_RatingLine, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV1_Extract_out0::SV1_Extract_out0()
    {
        m_MovieID = 0;
        m_UserID = 0;
        m_Rating = 0;
    }
    INLINE SV1_Extract_out0::SV1_Extract_out0(const SV1_Extract_out0 & c, IncrementalAllocator * alloc)
    {
        m_MovieID = c.m_MovieID;
        m_UserID = c.m_UserID;
        m_Rating = c.m_Rating;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_3_Data0::Process_3_Data0()
    {
        m_MovieID = 0;
        m_partialagg2__ = 0;
        m_partialagg3__ = 0;
    }
    INLINE Process_3_Data0::Process_3_Data0(const Process_3_Data0 & c, IncrementalAllocator * alloc)
    {
        m_MovieID = c.m_MovieID;
        m_partialagg2__ = c.m_partialagg2__;
        m_partialagg3__ = c.m_partialagg3__;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorKey_Process_4::HashAggregatorKey_Process_4()
    {
        m_MovieID = 0;
    }
    INLINE HashAggregatorKey_Process_4::HashAggregatorKey_Process_4(const HashAggregatorKey_Process_4 & c, IncrementalAllocator * alloc)
    {
        m_MovieID = c.m_MovieID;
    }

    template <typename Allocator>
    INLINE HashAggregatorKey_Process_4::HashAggregatorKey_Process_4(const HashAggregatorKey_Process_4 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_MovieID = c.m_MovieID;
    }

    template <typename Allocator>
    INLINE void HashAggregatorKey_Process_4::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorState_Process_4::HashAggregatorState_Process_4()
    {
        m_SUM_partialagg2__ = 0;
        m_UNCHECKED_SUM_partialagg3__ = 0;
    }
    INLINE HashAggregatorState_Process_4::HashAggregatorState_Process_4(const HashAggregatorState_Process_4 & c, IncrementalAllocator * alloc)
    {
        m_SUM_partialagg2__ = c.m_SUM_partialagg2__;
        m_UNCHECKED_SUM_partialagg3__ = c.m_UNCHECKED_SUM_partialagg3__;
    }

    template <typename Allocator>
    INLINE HashAggregatorState_Process_4::HashAggregatorState_Process_4(const HashAggregatorState_Process_4 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_SUM_partialagg2__ = c.m_SUM_partialagg2__;
        m_UNCHECKED_SUM_partialagg3__ = c.m_UNCHECKED_SUM_partialagg3__;
    }

    template <typename Allocator>
    INLINE void HashAggregatorState_Process_4::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV2_Process_out0::SV2_Process_out0()
    {
        m_MovieID1 = 0;
    }
    INLINE SV2_Process_out0::SV2_Process_out0(const SV2_Process_out0 & c, IncrementalAllocator * alloc) :
            m_AvgRating(c.m_AvgRating)
    {
        m_MovieID1 = c.m_MovieID1;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Extract_8_Data0::Extract_8_Data0()
    {
    }
    INLINE Extract_8_Data0::Extract_8_Data0(const Extract_8_Data0 & c, IncrementalAllocator * alloc) :
            m_UserLine(c.m_UserLine, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV3_Extract_out0::SV3_Extract_out0()
    {
        m_UserID = 0;
        m_Age = 0;
        m_Occupation = 0;
    }
    INLINE SV3_Extract_out0::SV3_Extract_out0(const SV3_Extract_out0 & c, IncrementalAllocator * alloc)
    {
        m_UserID = c.m_UserID;
        m_Age = c.m_Age;
        m_Occupation = c.m_Occupation;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_10_Data0::Process_10_Data0()
    {
        m_UserID1 = 0;
        m_Age3 = 0;
        m_Occupation4 = 0;
    }
    INLINE Process_10_Data0::Process_10_Data0(const Process_10_Data0 & c, IncrementalAllocator * alloc)
    {
        m_UserID1 = c.m_UserID1;
        m_Age3 = c.m_Age3;
        m_Occupation4 = c.m_Occupation4;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashJoin_11_Data0::HashJoin_11_Data0()
    {
        m_UserID = 0;
        m_UserID1 = 0;
        m_Age = 0;
        m_Occupation = 0;
        m_Age3 = 0;
        m_Occupation4 = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_11::HashCombineKey_HashJoin_11()
    {
        m_Age3_Age = 0;
        m_Occupation4_Occupation = 0;
    }
    INLINE HashCombineKey_HashJoin_11::HashCombineKey_HashJoin_11(const HashCombineKey_HashJoin_11 & c, IncrementalAllocator * alloc)
    {
        m_Age3_Age = c.m_Age3_Age;
        m_Occupation4_Occupation = c.m_Occupation4_Occupation;
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_11::HashCombineKey_HashJoin_11(const HashCombineKey_HashJoin_11 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_Age3_Age = c.m_Age3_Age;
        m_Occupation4_Occupation = c.m_Occupation4_Occupation;
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_11::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineValue_HashJoin_11::HashCombineValue_HashJoin_11()
    {
        m_UserID = 0;
    }
    INLINE HashCombineValue_HashJoin_11::HashCombineValue_HashJoin_11(const HashCombineValue_HashJoin_11 & c, IncrementalAllocator * alloc)
    {
        m_UserID = c.m_UserID;
    }

    template <typename Allocator>
    INLINE HashCombineValue_HashJoin_11::HashCombineValue_HashJoin_11(const HashCombineValue_HashJoin_11 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_UserID = c.m_UserID;
    }

    template <typename Allocator>
    INLINE void HashCombineValue_HashJoin_11::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV4_Combine_out0::SV4_Combine_out0()
    {
        m_aUserID = 0;
        m_bUserID = 0;
    }
    INLINE SV4_Combine_out0::SV4_Combine_out0(const SV4_Combine_out0 & c, IncrementalAllocator * alloc)
    {
        m_aUserID = c.m_aUserID;
        m_bUserID = c.m_bUserID;
    }

    template <typename Allocator>
    INLINE SV4_Combine_out0::SV4_Combine_out0(const SV4_Combine_out0 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_aUserID = c.m_aUserID;
        m_bUserID = c.m_bUserID;
    }

    template <typename Allocator>
    INLINE void SV4_Combine_out0::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_13_Data0::Process_13_Data0()
    {
        m_MovieID1 = 0;
        m_UserID2 = 0;
        m_Rating3 = 0;
    }
    INLINE Process_13_Data0::Process_13_Data0(const Process_13_Data0 & c, IncrementalAllocator * alloc)
    {
        m_MovieID1 = c.m_MovieID1;
        m_UserID2 = c.m_UserID2;
        m_Rating3 = c.m_Rating3;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashJoin_14_Data0::HashJoin_14_Data0()
    {
        m_aUserID = 0;
        m_bUserID = 0;
        m_MovieID1 = 0;
        m_Rating3 = 0;
    }
    INLINE HashJoin_14_Data0::HashJoin_14_Data0(const HashJoin_14_Data0 & c, IncrementalAllocator * alloc)
    {
        m_aUserID = c.m_aUserID;
        m_bUserID = c.m_bUserID;
        m_MovieID1 = c.m_MovieID1;
        m_Rating3 = c.m_Rating3;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_14::HashCombineKey_HashJoin_14()
    {
        m_UserID2_bUserID = 0;
    }
    INLINE HashCombineKey_HashJoin_14::HashCombineKey_HashJoin_14(const HashCombineKey_HashJoin_14 & c, IncrementalAllocator * alloc)
    {
        m_UserID2_bUserID = c.m_UserID2_bUserID;
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_14::HashCombineKey_HashJoin_14(const HashCombineKey_HashJoin_14 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_UserID2_bUserID = c.m_UserID2_bUserID;
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_14::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineValue_HashJoin_14::HashCombineValue_HashJoin_14()
    {
        m_aUserID = 0;
    }
    INLINE HashCombineValue_HashJoin_14::HashCombineValue_HashJoin_14(const HashCombineValue_HashJoin_14 & c, IncrementalAllocator * alloc)
    {
        m_aUserID = c.m_aUserID;
    }

    template <typename Allocator>
    INLINE HashCombineValue_HashJoin_14::HashCombineValue_HashJoin_14(const HashCombineValue_HashJoin_14 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_aUserID = c.m_aUserID;
    }

    template <typename Allocator>
    INLINE void HashCombineValue_HashJoin_14::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashJoin_15_Data0::HashJoin_15_Data0()
    {
        m_aUserID = 0;
        m_bUserID = 0;
        m_Rating = 0;
        m_Rating3 = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_15::HashCombineKey_HashJoin_15()
    {
        m_MovieID1_MovieID = 0;
        m_aUserID_UserID = 0;
    }
    INLINE HashCombineKey_HashJoin_15::HashCombineKey_HashJoin_15(const HashCombineKey_HashJoin_15 & c, IncrementalAllocator * alloc)
    {
        m_MovieID1_MovieID = c.m_MovieID1_MovieID;
        m_aUserID_UserID = c.m_aUserID_UserID;
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_15::HashCombineKey_HashJoin_15(const HashCombineKey_HashJoin_15 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_MovieID1_MovieID = c.m_MovieID1_MovieID;
        m_aUserID_UserID = c.m_aUserID_UserID;
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_15::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineValue_HashJoin_15::HashCombineValue_HashJoin_15()
    {
        m_Rating = 0;
    }
    INLINE HashCombineValue_HashJoin_15::HashCombineValue_HashJoin_15(const HashCombineValue_HashJoin_15 & c, IncrementalAllocator * alloc)
    {
        m_Rating = c.m_Rating;
    }

    template <typename Allocator>
    INLINE HashCombineValue_HashJoin_15::HashCombineValue_HashJoin_15(const HashCombineValue_HashJoin_15 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_Rating = c.m_Rating;
    }

    template <typename Allocator>
    INLINE void HashCombineValue_HashJoin_15::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_16_Data0::Process_16_Data0()
    {
        m_aUserID = 0;
        m_bUserID = 0;
    }
    INLINE Process_16_Data0::Process_16_Data0(const Process_16_Data0 & c, IncrementalAllocator * alloc) :
            m_partialagg4__(c.m_partialagg4__),
            m_partialagg5__(c.m_partialagg5__),
            m_partialagg6__(c.m_partialagg6__)
    {
        m_aUserID = c.m_aUserID;
        m_bUserID = c.m_bUserID;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorState_Process_17::HashAggregatorState_Process_17()
    {
        m_SUM_partialagg4__ = 0;
        m_SUM_fEmpty_partialagg4__ = false;
        m_SUM_partialagg5__ = 0.0;
        m_SUM_fEmpty_partialagg5__ = false;
        m_SUM_partialagg6__ = 0.0;
        m_SUM_fEmpty_partialagg6__ = false;
    }
    INLINE HashAggregatorState_Process_17::HashAggregatorState_Process_17(const HashAggregatorState_Process_17 & c, IncrementalAllocator * alloc)
    {
        m_SUM_partialagg4__ = c.m_SUM_partialagg4__;
        m_SUM_fEmpty_partialagg4__ = c.m_SUM_fEmpty_partialagg4__;
        m_SUM_partialagg5__ = c.m_SUM_partialagg5__;
        m_SUM_fEmpty_partialagg5__ = c.m_SUM_fEmpty_partialagg5__;
        m_SUM_partialagg6__ = c.m_SUM_partialagg6__;
        m_SUM_fEmpty_partialagg6__ = c.m_SUM_fEmpty_partialagg6__;
    }

    template <typename Allocator>
    INLINE HashAggregatorState_Process_17::HashAggregatorState_Process_17(const HashAggregatorState_Process_17 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_SUM_partialagg4__ = c.m_SUM_partialagg4__;
        m_SUM_fEmpty_partialagg4__ = c.m_SUM_fEmpty_partialagg4__;
        m_SUM_partialagg5__ = c.m_SUM_partialagg5__;
        m_SUM_fEmpty_partialagg5__ = c.m_SUM_fEmpty_partialagg5__;
        m_SUM_partialagg6__ = c.m_SUM_partialagg6__;
        m_SUM_fEmpty_partialagg6__ = c.m_SUM_fEmpty_partialagg6__;
    }

    template <typename Allocator>
    INLINE void HashAggregatorState_Process_17::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV5_Combine_out0::SV5_Combine_out0()
    {
        m_Similarity = 0.0;
        m_aUserID = 0;
        m_bUserID = 0;
    }
    INLINE SV5_Combine_out0::SV5_Combine_out0(const SV5_Combine_out0 & c, IncrementalAllocator * alloc)
    {
        m_Similarity = c.m_Similarity;
        m_aUserID = c.m_aUserID;
        m_bUserID = c.m_bUserID;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_21_Data0::Process_21_Data0()
    {
        m_MovieID = 0;
        m_UserID = 0;
    }
    INLINE Process_21_Data0::Process_21_Data0(const Process_21_Data0 & c, IncrementalAllocator * alloc)
    {
        m_MovieID = c.m_MovieID;
        m_UserID = c.m_UserID;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashJoin_22_Data0::HashJoin_22_Data0()
    {
        m_aUserID = 0;
        m_bUserID = 0;
        m_MovieID = 0;
    }
    INLINE HashJoin_22_Data0::HashJoin_22_Data0(const HashJoin_22_Data0 & c, IncrementalAllocator * alloc)
    {
        m_aUserID = c.m_aUserID;
        m_bUserID = c.m_bUserID;
        m_MovieID = c.m_MovieID;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_22::HashCombineKey_HashJoin_22()
    {
        m_UserID_bUserID = 0;
    }
    INLINE HashCombineKey_HashJoin_22::HashCombineKey_HashJoin_22(const HashCombineKey_HashJoin_22 & c, IncrementalAllocator * alloc)
    {
        m_UserID_bUserID = c.m_UserID_bUserID;
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_22::HashCombineKey_HashJoin_22(const HashCombineKey_HashJoin_22 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_UserID_bUserID = c.m_UserID_bUserID;
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_22::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_23_Data0::Process_23_Data0()
    {
        m_MovieID1 = 0;
        m_UserID2 = 0;
    }
    INLINE Process_23_Data0::Process_23_Data0(const Process_23_Data0 & c, IncrementalAllocator * alloc)
    {
        m_MovieID1 = c.m_MovieID1;
        m_UserID2 = c.m_UserID2;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_24::HashCombineKey_HashJoin_24()
    {
        m_aUserID_UserID2 = 0;
        m_MovieID_MovieID1 = 0;
    }
    INLINE HashCombineKey_HashJoin_24::HashCombineKey_HashJoin_24(const HashCombineKey_HashJoin_24 & c, IncrementalAllocator * alloc)
    {
        m_aUserID_UserID2 = c.m_aUserID_UserID2;
        m_MovieID_MovieID1 = c.m_MovieID_MovieID1;
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_24::HashCombineKey_HashJoin_24(const HashCombineKey_HashJoin_24 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_aUserID_UserID2 = c.m_aUserID_UserID2;
        m_MovieID_MovieID1 = c.m_MovieID_MovieID1;
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_24::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineValue_HashJoin_24::HashCombineValue_HashJoin_24()
    {
    }
    INLINE HashCombineValue_HashJoin_24::HashCombineValue_HashJoin_24(const HashCombineValue_HashJoin_24 & c, IncrementalAllocator * alloc)
    {
    }

    template <typename Allocator>
    INLINE HashCombineValue_HashJoin_24::HashCombineValue_HashJoin_24(const HashCombineValue_HashJoin_24 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

    }

    template <typename Allocator>
    INLINE void HashCombineValue_HashJoin_24::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE SV6_Combine_out0::SV6_Combine_out0()
    {
        m_UnseenMovieID = 0;
        m_aUserID2 = 0;
        m_bUserID3 = 0;
    }
    INLINE SV6_Combine_out0::SV6_Combine_out0(const SV6_Combine_out0 & c, IncrementalAllocator * alloc)
    {
        m_UnseenMovieID = c.m_UnseenMovieID;
        m_aUserID2 = c.m_aUserID2;
        m_bUserID3 = c.m_bUserID3;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashJoin_26_Data0::HashJoin_26_Data0()
    {
        m_aUserID = 0;
        m_Similarity = 0.0;
        m_UnseenMovieID = 0;
        m_bUserID3 = 0;
    }
    INLINE HashJoin_26_Data0::HashJoin_26_Data0(const HashJoin_26_Data0 & c, IncrementalAllocator * alloc)
    {
        m_aUserID = c.m_aUserID;
        m_Similarity = c.m_Similarity;
        m_UnseenMovieID = c.m_UnseenMovieID;
        m_bUserID3 = c.m_bUserID3;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_26::HashCombineKey_HashJoin_26()
    {
        m_aUserID2_aUserID = 0;
        m_bUserID3_bUserID = 0;
    }
    INLINE HashCombineKey_HashJoin_26::HashCombineKey_HashJoin_26(const HashCombineKey_HashJoin_26 & c, IncrementalAllocator * alloc)
    {
        m_aUserID2_aUserID = c.m_aUserID2_aUserID;
        m_bUserID3_bUserID = c.m_bUserID3_bUserID;
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_26::HashCombineKey_HashJoin_26(const HashCombineKey_HashJoin_26 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_aUserID2_aUserID = c.m_aUserID2_aUserID;
        m_bUserID3_bUserID = c.m_bUserID3_bUserID;
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_26::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineValue_HashJoin_26::HashCombineValue_HashJoin_26()
    {
        m_Similarity = 0.0;
    }
    INLINE HashCombineValue_HashJoin_26::HashCombineValue_HashJoin_26(const HashCombineValue_HashJoin_26 & c, IncrementalAllocator * alloc)
    {
        m_Similarity = c.m_Similarity;
    }

    template <typename Allocator>
    INLINE HashCombineValue_HashJoin_26::HashCombineValue_HashJoin_26(const HashCombineValue_HashJoin_26 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_Similarity = c.m_Similarity;
    }

    template <typename Allocator>
    INLINE void HashCombineValue_HashJoin_26::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashJoin_27_Data0::HashJoin_27_Data0()
    {
        m_aUserID = 0;
        m_Similarity = 0.0;
        m_MovieID1 = 0;
        m_UnseenMovieID = 0;
        m_bUserID3 = 0;
    }
    INLINE HashJoin_27_Data0::HashJoin_27_Data0(const HashJoin_27_Data0 & c, IncrementalAllocator * alloc) :
            m_AvgRating(c.m_AvgRating)
    {
        m_aUserID = c.m_aUserID;
        m_Similarity = c.m_Similarity;
        m_MovieID1 = c.m_MovieID1;
        m_UnseenMovieID = c.m_UnseenMovieID;
        m_bUserID3 = c.m_bUserID3;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_27::HashCombineKey_HashJoin_27()
    {
        m_UnseenMovieID_MovieID1 = 0;
    }
    INLINE HashCombineKey_HashJoin_27::HashCombineKey_HashJoin_27(const HashCombineKey_HashJoin_27 & c, IncrementalAllocator * alloc)
    {
        m_UnseenMovieID_MovieID1 = c.m_UnseenMovieID_MovieID1;
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_27::HashCombineKey_HashJoin_27(const HashCombineKey_HashJoin_27 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_UnseenMovieID_MovieID1 = c.m_UnseenMovieID_MovieID1;
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_27::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineValue_HashJoin_27::HashCombineValue_HashJoin_27()
    {
    }
    INLINE HashCombineValue_HashJoin_27::HashCombineValue_HashJoin_27(const HashCombineValue_HashJoin_27 & c, IncrementalAllocator * alloc) :
            m_AvgRating(c.m_AvgRating)
    {
    }

    template <typename Allocator>
    INLINE HashCombineValue_HashJoin_27::HashCombineValue_HashJoin_27(const HashCombineValue_HashJoin_27 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_AvgRating = c.m_AvgRating;
    }

    template <typename Allocator>
    INLINE void HashCombineValue_HashJoin_27::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashJoin_28_Data0::HashJoin_28_Data0()
    {
        m_aUserID = 0;
        m_Similarity = 0.0;
        m_MovieID1 = 0;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashCombineKey_HashJoin_28::HashCombineKey_HashJoin_28()
    {
        m_bUserID3_UserID = 0;
        m_UnseenMovieID_MovieID = 0;
    }
    INLINE HashCombineKey_HashJoin_28::HashCombineKey_HashJoin_28(const HashCombineKey_HashJoin_28 & c, IncrementalAllocator * alloc)
    {
        m_bUserID3_UserID = c.m_bUserID3_UserID;
        m_UnseenMovieID_MovieID = c.m_UnseenMovieID_MovieID;
    }

    template <typename Allocator>
    INLINE HashCombineKey_HashJoin_28::HashCombineKey_HashJoin_28(const HashCombineKey_HashJoin_28 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_bUserID3_UserID = c.m_bUserID3_UserID;
        m_UnseenMovieID_MovieID = c.m_UnseenMovieID_MovieID;
    }

    template <typename Allocator>
    INLINE void HashCombineKey_HashJoin_28::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_29_Data0::Process_29_Data0()
    {
        m_aUserID = 0;
    }
    INLINE Process_29_Data0::Process_29_Data0(const Process_29_Data0 & c, IncrementalAllocator * alloc) :
            m_partialagg7__(c.m_partialagg7__, alloc)
    {
        m_aUserID = c.m_aUserID;
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE HashAggregatorState_Process_30::HashAggregatorState_Process_30()
    {
    }
    INLINE HashAggregatorState_Process_30::HashAggregatorState_Process_30(const HashAggregatorState_Process_30 & c, IncrementalAllocator * alloc) :
            m_MAX_partialagg7__(c.m_MAX_partialagg7__, alloc)
    {
    }

    template <typename Allocator>
    INLINE HashAggregatorState_Process_30::HashAggregatorState_Process_30(const HashAggregatorState_Process_30 & c, FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {

        m_MAX_partialagg7__ = c.m_MAX_partialagg7__;
        memoryManager->Copy(m_MAX_partialagg7__);
    }

    template <typename Allocator>
    INLINE void HashAggregatorState_Process_30::Delete(FixedArrayTypeMemoryManager<Allocator> * memoryManager)
    {
        memoryManager->Delete(m_MAX_partialagg7__);
    }


// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_33_Data0::Process_33_Data0()
    {
        m_aUserID = 0;
    }

#pragma endregion Schema Constructors
#pragma hdrstop
#if defined(COMPILE_INIT_SHUTDOWN)
#if defined(COMPILE_MANAGED)
extern "C" __declspec(dllexport) void __stdcall InitVertexManaged(std::string * argv, int argc)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    cli::array<String^>^ arguments = ScopeEngineManaged::GroupArguments(argv, argc);
    ScopeEngineManaged::InitializeScopeEngineManaged(arguments);
}
extern "C" __declspec(dllexport) void __stdcall ShutdownVertexManaged(UINT64& peakManagedMemory)
{
    ScopeEngineManaged::FinalizeScopeEngineManaged(peakManagedMemory);
}
#endif
#if defined(COMPILE_NATIVE)
ScopeEngine::ScopeCEPCheckpointManager* g_scopeCEPCheckpointManager = NULL;
extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    ErrorManager::GetGlobal()->EnableJSON();

}
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, std::string * outputFileNames, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputFileNames[0]));
}
#endif
#endif
#pragma region SV1_Extract
#if defined(COMPILE_SV1_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class TextExtractPolicy<Extract_0_Data0, UID_Extract_0>
    {
    public:
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<'\t', '\n', '\0', false, true, UTF8, true, false, 0>, CosmosInput> * input, Extract_0_Data0 & row)
        {
            for(;;)
            {
                try
                {
                    // When we start a new row we always skip all empty lines first.
                    input->StartRow(1);
                    input->Read(row.m_RatingLine);
                    return true;
                }
                catch(RuntimeMemoryException & e)
                {
                     throw ScopeStreamExceptionWithEvidence(E_EXTRACT_ROW_TOO_LONG,
                        { input->CurrentLineNumber() - 1, Configuration::GetGlobal().GetMaxOnDiskRowSize()},
                        [&input, &e] (stringstream &out) -> void
                     {
                         input->Dump(out);
                     });                     
                }
                catch (ScopeStreamException & e)
                {
                    // Handle different error during reading
                    switch(e.Error())
                    {
                    // Following error will terminate read
                    case ScopeStreamException::EndOfFile:                    
                    case ScopeStreamException::BadDevice:
                    case ScopeStreamException::PassSplitEndPoint:
                        return false;

                    case ScopeStreamException::StreamSplitUnexpectedEOF:
                         throw ScopeStreamExceptionWithEvidence(E_STREAM_SPLIT_UNEXPECTED_EOF,
                             {input->cbConsumed(), input->CurrentLineNumber() - 1},
                             [&input] (stringstream &out) -> void
                         {
                             input->Dump(out);
                         });                            

                    case ScopeStreamException::InvalidCharacter:
                        // Invalid character in input stream (found during character conversion)
                        throw ScopeStreamExceptionWithEvidence(E_EXTRACT_INVALID_CHARACTER,
                            { "UTF8", input->CurrentLineNumber() - 1}, e);
                    // Bad rows throw exception
                    case ScopeStreamException::NewLine:
                    case ScopeStreamException::NewLineExpected:
                        // Wrong number of columns in row - report error
                        throw ScopeStreamExceptionWithEvidence(E_EXTRACT_UNEXPECTED_NUMBER_COLUMNS,
                            { input->CurrentLineNumber() - 1, 1, input->CurrentField(), input->CurrentDelimiter() + 1},
                            [&input] (stringstream &out) -> void
                        {
                            input->Dump(out);
                        });

                    case ScopeStreamException::SkipFirstRowsUnexpectedEOF:
                        throw ScopeStreamExceptionWithEvidence(E_SKIP_FIRST_ROWS_UNEXPECTED_EOF,
                            { input->skipFirstRowsCount, input->NumFirstRowsSkipped() },
                            [&input] (stringstream &out) -> void
                         {
                             input->Dump(out);
                         });

                    default:
                        // for all other conversion error etc, we need to throw error
                        input->ThrowBadConvertException();
                    }
                }
            }
        }
    };
#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Extract_0_Data0, typename SV1_Extract_out0, UID_Process_1>
    {
    public:

        static bool FilterTransformRow(Extract_0_Data0 & input, SV1_Extract_out0 & output, IncrementalAllocator * alloc)
        {
            return true;
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_1>
    {
        typedef Microsoft::Analytics::Interfaces::IProcessor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_1());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(MakeBigString(L""))));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_1, "Constructor", ex);
                throw;
            }
        }

        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }

        cli::array<String^>^ ReadOnlyColumns()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<SV1_Extract_out0, UID_Process_1>
    {
    public:
        static void Marshal(Microsoft::Analytics::Interfaces::IRow^ managedRow, SV1_Extract_out0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_MovieID, managedRow->Get<System::Int32>(0), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_UserID, managedRow->Get<System::Int32>(1), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Rating, managedRow->Get<System::Int32>(2), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, std::string * outputFileNames, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = false;
        // If we have more than one input, we will random shuffle it
        if (inputCnt > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(inputs, inputs + inputCnt, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<Extract_0_Data0, TextExtractPolicy<Extract_0_Data0, UID_Extract_0>, TextInputStream<TextInputStreamTraitsConst<'\t', '\n', '\0', false, true, UTF8, true, false, 0>, CosmosInput>> ExtractorType1_SV1_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV1_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV1_Extract>[inputCnt]);
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i].reset(new ExtractorType1_SV1_Extract(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters('\t', '\n', '\0', nullptr, false, true, UTF8, true, false, 0), UID_Extract_0));
        }
        ExtractorType1_SV1_Extract ** extractor_0 = (ExtractorType1_SV1_Extract **)extractor_0_array.get();
        ULONG extractor_0_count = (ULONG)inputCnt;
        // Merge streams N->1
        typedef ParallelUnionAll<ExtractorType1_SV1_Extract, Extract_0_Data0, IsNativeOnlyVertex> UnionAllType_Extract_0_Process_1_connector;
        unique_ptr<UnionAllType_Extract_0_Process_1_connector> unionall_Extract_0_Process_1_connector_ptr(new UnionAllType_Extract_0_Process_1_connector(extractor_0,extractor_0_count,false,UID_ParallelUnionAll_Extract_0));
        UnionAllType_Extract_0_Process_1_connector * unionall_Extract_0_Process_1_connector = unionall_Extract_0_Process_1_connector_ptr.get();
        ULONG unionall_Extract_0_Process_1_connector_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Extract_0_Data0>> delegate_unionall_Extract_0_Process_1_connector_ptr (new OperatorDelegate<Extract_0_Data0>(OperatorDelegate<Extract_0_Data0>::FromOperator(unionall_Extract_0_Process_1_connector)));
        OperatorDelegate<Extract_0_Data0> * delegate_unionall_Extract_0_Process_1_connector = delegate_unionall_Extract_0_Process_1_connector_ptr.get();
        ULONG delegate_unionall_Extract_0_Process_1_connector_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Extract_0_Data0, SV1_Extract_out0> ProcessorType_Process_1;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_1> processor_Process_1_ptr (new ProcessorType_Process_1(ScopeProcessorManagedFactory::MakeSqlIp<Extract_0_Data0,SV1_Extract_out0,UID_Process_1>(delegate_unionall_Extract_0_Process_1_connector), delegate_unionall_Extract_0_Process_1_connector, UID_Process_1));
        ProcessorType_Process_1 * processor_Process_1 = processor_Process_1_ptr.get();
        ULONG processor_Process_1_count = 1;
        // Define outputer type
        typedef Outputer<ProcessorType_Process_1, SV1_Extract_out0, BinaryOutputPolicy<SV1_Extract_out0>, BinaryOutputStream, false> OutputerType2_SV1_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV1_Extract> outputer_SV1_Extract_out0_ptr(new OutputerType2_SV1_Extract(processor_Process_1, outputFileNames[0], x_outputBufSize, x_outputBufCnt, UID_SV1_Extract_out0));
        OutputerType2_SV1_Extract * outputer_SV1_Extract_out0 = outputer_SV1_Extract_out0_ptr.get();

        try
        {
            // Init operator chain
            outputer_SV1_Extract_out0->Init();
    
            // Execute the whole vertex by calling the GetNextRow on top operator
            SV1_Extract_out0 row;
            outputer_SV1_Extract_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV1_Extract_out0->Close();
        }
        catch(ExceptionWithStack & ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(ex.GetErrorDetails());
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV1_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<Extract_0_Data0, SV1_Extract_out0> * ScopeEngine::ScopeProcessorManagedFactory::MakeSqlIp<Extract_0_Data0, SV1_Extract_out0, UID_Process_1>(OperatorDelegate<Extract_0_Data0>*);
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV1_Extract
#pragma region SV2_Process
#if defined(COMPILE_SV2_PROCESS) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_3_Data0,UID_Process_6>
    {
    public:
        struct KeyStruct
        {
            int m_MovieID;

            KeyStruct(Process_3_Data0 & c) :
                m_MovieID(c.m_MovieID)
            {
            }

            KeyStruct(const Process_3_Data0 & c, IncrementalAllocator * alloc) :
                m_MovieID(const_cast<Process_3_Data0&>(c).m_MovieID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_MovieID(c.m_MovieID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_MovieID(const_cast<KeyStruct&>(c).m_MovieID)
            {
            }

            KeyStruct() :
                m_MovieID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tMovieID:\t" << row.m_MovieID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_3_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_MovieID, key.m_MovieID)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_3_Data0 * n1, Process_3_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_MovieID, (*n2).m_MovieID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename Process_3_Data0, typename Process_3_Data0, UID_Process_6> 
    {
    public:
        
        AggregationPolicy()
            :
            m_MovieID_MovieID_FIRST("FIRST_MovieID_MovieID"),
            m_partialagg2___partialagg2___SUM("SUM_partialagg2___partialagg2__"),
            m_partialagg3___partialagg3___UNCHECKED_SUM("UNCHECKED_SUM_partialagg3___partialagg3__")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<Process_3_Data0,UID_Process_6>::KeyType * input, Process_3_Data0 * output)
        {
            (*output).m_MovieID = (*input).m_MovieID;
        }

        // process input row, called for each row in key range
        void AddRow(Process_3_Data0 * input)
        {
            m_MovieID_MovieID_FIRST.Add((*input).m_MovieID);
            m_partialagg2___partialagg2___SUM.Add((*input).m_partialagg2__);
            m_partialagg3___partialagg3___UNCHECKED_SUM.Add((*input).m_partialagg3__);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(Process_3_Data0 * output)
        {
            m_MovieID_MovieID_FIRST.Aggregate(&(*output).m_MovieID);
            m_partialagg2___partialagg2___SUM.Aggregate(&(*output).m_partialagg2__);
            m_partialagg3___partialagg3___UNCHECKED_SUM.Aggregate(&(*output).m_partialagg3__);
        }

        // write aggregated data
        void GetValue(Process_3_Data0 * output)
        {
            m_MovieID_MovieID_FIRST.GetValue(&(*output).m_MovieID);
            m_partialagg2___partialagg2___SUM.GetValue(&(*output).m_partialagg2__);
            m_partialagg3___partialagg3___UNCHECKED_SUM.GetValue(&(*output).m_partialagg3__);
        }

        // reset for new key
        void Reset()
        {
            m_MovieID_MovieID_FIRST.Reset();
            m_partialagg2___partialagg2___SUM.Reset();
            m_partialagg3___partialagg3___UNCHECKED_SUM.Reset();
        }

        // store statistics
        void WriteRuntimeStats(TreeNode & root)
        {
            m_MovieID_MovieID_FIRST.WriteRuntimeStats(root);
            m_partialagg2___partialagg2___SUM.WriteRuntimeStats(root);
            m_partialagg3___partialagg3___UNCHECKED_SUM.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            OperatorRequirements result;
            result.Add(m_MovieID_MovieID_FIRST.GetOperatorRequirements());
            result.Add(m_partialagg2___partialagg2___SUM.GetOperatorRequirements());
            result.Add(m_partialagg3___partialagg3___UNCHECKED_SUM.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<int> m_MovieID_MovieID_FIRST;
        Aggregate_SUM<__int64,__int64> m_partialagg2___partialagg2___SUM;
        Aggregate_UNCHECKED_SUM<__int64,__int64> m_partialagg3___partialagg3___UNCHECKED_SUM;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_3_Data0,UID_Process_5>
    {
    public:
        struct KeyStruct
        {
            int m_MovieID;

            KeyStruct(Process_3_Data0 & c) :
                m_MovieID(c.m_MovieID)
            {
            }

            KeyStruct(const Process_3_Data0 & c, IncrementalAllocator * alloc) :
                m_MovieID(const_cast<Process_3_Data0&>(c).m_MovieID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_MovieID(c.m_MovieID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_MovieID(const_cast<KeyStruct&>(c).m_MovieID)
            {
            }

            KeyStruct() :
                m_MovieID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tMovieID:\t" << row.m_MovieID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_3_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_MovieID, key.m_MovieID)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_3_Data0 * n1, Process_3_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_MovieID, (*n2).m_MovieID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Process_3_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_MovieID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Process_3_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_3 [] =
    {
        "MovieID",
        "(long)(Rating)",
        "1L",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename SV1_Extract_out0, typename Process_3_Data0, UID_Process_3>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_out0 & input, Process_3_Data0 & output, IncrementalAllocator * alloc)
        {
            InitializeStatics();
            int exceptionIndex = 0;
            try
            {
                output.m_MovieID = input.m_MovieID;
                exceptionIndex++;
                output.m_partialagg2__ = scope_cast<__int64>((input.m_Rating));
                exceptionIndex++;
                output.m_partialagg3__ = 1LL;
                exceptionIndex++;

                return true;
            }
            catch(...)
            {
                std::string exceptionString = "Exception thrown while evaluating expression \"";
                exceptionString += StringTable_Process_3[exceptionIndex];
                exceptionString += "\"";
                cout << exceptionString.c_str() << endl;
                throw RuntimeExpressionException(StringTable_Process_3[exceptionIndex]);
            }
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Process_3_Data0, typename Process_3_Data0, UID_Process_4>
    {
    public:

        static bool FilterTransformRow(Process_3_Data0 & input, Process_3_Data0 & output, IncrementalAllocator * alloc)
        {
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)

    template<>
    struct HashAggregationPolicyV2<Process_3_Data0, Process_3_Data0, UID_Process_4>
    {
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0)
            {
            }

            Hash(INT64 seed) : m_seed(seed)
            {
            }

            INT64 operator () (const HashAggregatorKey_Process_4& schema) const
            {
                INT64 result = m_seed;
                result += ScopeHash(schema.m_MovieID);
                return result;
            }
        };
        struct EqualTo
        {
            bool operator () (const HashAggregatorKey_Process_4& left, const HashAggregatorKey_Process_4& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_MovieID, right.m_MovieID)) return false;
                return true;
            }
        };
        struct RowHash
        {
            const INT64 m_seed;

            RowHash() : m_seed((INT64)0) {}
            RowHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const Process_3_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_MovieID);
                
                return result;
            }
        };

        struct RowEqualTo
        {
            bool operator () (const Process_3_Data0& left, const HashAggregatorKey_Process_4& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_MovieID, right.m_MovieID)) return false;
                return true;
            }
        };
 
        typedef HashAggregatorKey_Process_4 KeySchema;
        typedef HashAggregatorState_Process_4 ValueSchema;

        static const RowHash& RowHashF()
        {
            static RowHash hash;
            return hash;
        }
        
        static const RowEqualTo& RowPredF()
        {
            static RowEqualTo pred;
            return pred;
        }

        static const size_t s_memoryQuota{ 3426746366ULL }; // Cosmos default is 2GB
        
        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // initial number of buckets in the hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        static       double MaxLoadFactor() { return 2.; }
        static const bool   s_valueSchemaHasDeepData{ false };

        // Shallow copy input schema fields to key schema
        static void ShallowCopyRowToKey(const Process_3_Data0 & row, KeySchema & key)
        {
           key.m_MovieID = row.m_MovieID;
        }

        static void DeepCopyRowToKey(const Process_3_Data0 & row, KeySchema & key, IncrementalAllocator* alloc)
        {
           key.m_MovieID = row.m_MovieID;
        }

        // Init value schema fields with default aggregate states, shallow copy
        static void ShallowCopyRowToValue(const Process_3_Data0 & row, ValueSchema & value)
        {
           Aggregate_SUM<__int64, __int64>::Init(value.m_SUM_partialagg2__, row.m_partialagg2__);
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialagg3__, row.m_partialagg3__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void DeepCopyRowToValue(const Process_3_Data0 & row, ValueSchema & value, IncrementalAllocator* alloc)
        {
           Aggregate_SUM<__int64, __int64>::Init(value.m_SUM_partialagg2__, row.m_partialagg2__);
           Aggregate_UNCHECKED_SUM<__int64, __int64>::Init(value.m_UNCHECKED_SUM_partialagg3__, row.m_partialagg3__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void UpdateValue(ValueSchema & state, const Process_3_Data0 & update, IncrementalAllocator* alloc)
        {
                Aggregate_SUM<__int64, __int64>::UpdateState(state.m_SUM_partialagg2__, update.m_partialagg2__);
                Aggregate_UNCHECKED_SUM<__int64, __int64>::UpdateState(state.m_UNCHECKED_SUM_partialagg3__, update.m_partialagg3__);
        }


        // Shallow copy key and aggregated states to the output
        static void GetOutput(const KeySchema & key, const ValueSchema & value, Process_3_Data0 & row)
        {
            row.m_MovieID = key.m_MovieID;
            Aggregate_SUM<__int64, __int64>::GetAggregatedValue(value.m_SUM_partialagg2__, &row.m_partialagg2__);
            Aggregate_UNCHECKED_SUM<__int64, __int64>::GetAggregatedValue(value.m_UNCHECKED_SUM_partialagg3__, &row.m_partialagg3__);
        }


    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Process_3_Data0, typename Process_3_Data0, UID_Process_6>
    {
    public:

        static bool FilterTransformRow(Process_3_Data0 & input, Process_3_Data0 & output, IncrementalAllocator * alloc)
        {
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_7 [] =
    {
        "partialagg3__ == 0 ? (long?)null : partialagg2__ / partialagg3__",
        "MovieID",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename Process_3_Data0, typename SV2_Process_out0, UID_Process_7>
    {
    public:

        static bool FilterTransformRow(Process_3_Data0 & input, SV2_Process_out0 & output, IncrementalAllocator * alloc)
        {
            InitializeStatics();
            int exceptionIndex = 0;
            try
            {
                output.m_AvgRating = (input.m_partialagg3__ == scope_cast<__int64>(0) ? scope_cast<NativeNullable<__int64>>(__nullptr) : scope_cast<NativeNullable<__int64>>((input.m_partialagg2__ / input.m_partialagg3__)));
                exceptionIndex++;
                output.m_MovieID1 = input.m_MovieID;
                exceptionIndex++;

                return true;
            }
            catch(...)
            {
                std::string exceptionString = "Exception thrown while evaluating expression \"";
                exceptionString += StringTable_Process_7[exceptionIndex];
                exceptionString += "\"";
                cout << exceptionString.c_str() << endl;
                throw RuntimeExpressionException(StringTable_Process_7[exceptionIndex]);
            }
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV2_Process_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, std::string * outputFileNames, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_out0, BinaryExtractPolicy<SV1_Extract_out0>, BinaryInputStream> ExtractorType1_SV2_Process;
        unique_ptr<ExtractorType1_SV2_Process> extractor_0_ptr= make_unique<ExtractorType1_SV2_Process>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType1_SV2_Process * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;

        // Define the type of the operator
        typedef FilterTransformer<ExtractorType1_SV2_Process, SV1_Extract_out0, Process_3_Data0, UID_Process_3> FilterTransformerType_Process_3;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_3> filterTransformer_Process_3_ptr (new FilterTransformerType_Process_3(extractor_0, UID_Process_3));
        FilterTransformerType_Process_3 * filterTransformer_Process_3 = filterTransformer_Process_3_ptr.get();
        ULONG filterTransformer_Process_3_count = 1;
        // Define hash aggregator type
        typedef LocalHashAggregatorV2<FilterTransformerType_Process_3, Process_3_Data0, Process_3_Data0, UID_Process_4> LocalHashAggregatorType_Process_4;
        // Construct operator and initialize it.
        unique_ptr<LocalHashAggregatorType_Process_4> localHashAggregator_Process_4_ptr (new LocalHashAggregatorType_Process_4(filterTransformer_Process_3, UID_Process_4));
        LocalHashAggregatorType_Process_4 * localHashAggregator_Process_4 = localHashAggregator_Process_4_ptr.get();
        ULONG localHashAggregator_Process_4_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_3_Data0>> delegate_localHashAggregator_Process_4_ptr (new OperatorDelegate<Process_3_Data0>(OperatorDelegate<Process_3_Data0>::FromOperator(localHashAggregator_Process_4)));
        OperatorDelegate<Process_3_Data0> * delegate_localHashAggregator_Process_4 = delegate_localHashAggregator_Process_4_ptr.get();
        ULONG delegate_localHashAggregator_Process_4_count = 1;
        // Define sorter type
        typedef Sorter<Process_3_Data0> SorterType_Process_5;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_5> sorter_Process_5_ptr (new SorterType_Process_5(delegate_localHashAggregator_Process_4, &StdSort<Process_3_Data0>::Sort<KeyComparePolicy<Process_3_Data0, UID_Process_5>, (sizeof(Process_3_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<Process_3_Data0>::CreateDelegate<UID_Process_5>(), false, 2457862142 /*memoryQuota*/, UID_Process_5));
        SorterType_Process_5 * sorter_Process_5 = sorter_Process_5_ptr.get();
        ULONG sorter_Process_5_count = 1;
        // Define stream aggregator type
        typedef StreamAggregator<SorterType_Process_5, Process_3_Data0, Process_3_Data0, UID_Process_6> StreamAggregatorType_Process_6;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_6> streamAggregator_Process_6_ptr (new StreamAggregatorType_Process_6(sorter_Process_5, false, UID_Process_6));
        StreamAggregatorType_Process_6 * streamAggregator_Process_6 = streamAggregator_Process_6_ptr.get();
        ULONG streamAggregator_Process_6_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<StreamAggregatorType_Process_6, Process_3_Data0, SV2_Process_out0, UID_Process_7> FilterTransformerType_Process_7;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_7> filterTransformer_Process_7_ptr (new FilterTransformerType_Process_7(streamAggregator_Process_6, UID_Process_7));
        FilterTransformerType_Process_7 * filterTransformer_Process_7 = filterTransformer_Process_7_ptr.get();
        ULONG filterTransformer_Process_7_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_7, SV2_Process_out0, BinaryOutputPolicy<SV2_Process_out0>, BinaryOutputStream, false> OutputerType2_SV2_Process;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV2_Process> outputer_SV2_Process_out0_ptr(new OutputerType2_SV2_Process(filterTransformer_Process_7, outputFileNames[0], x_outputBufSize, x_outputBufCnt, UID_SV2_Process_out0));
        OutputerType2_SV2_Process * outputer_SV2_Process_out0 = outputer_SV2_Process_out0_ptr.get();

        try
        {
            // Init operator chain
            outputer_SV2_Process_out0->Init();
    
            // Execute the whole vertex by calling the GetNextRow on top operator
            SV2_Process_out0 row;
            outputer_SV2_Process_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV2_Process_out0->Close();
        }
        catch(ExceptionWithStack & ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(ex.GetErrorDetails());
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV2_Process_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV2_Process
#pragma region SV3_Extract
#if defined(COMPILE_SV3_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class TextExtractPolicy<Extract_8_Data0, UID_Extract_8>
    {
    public:
        static bool Deserialize(TextInputStream<TextInputStreamTraitsConst<'\t', '\n', '\0', false, true, UTF8, true, false, 0>, CosmosInput> * input, Extract_8_Data0 & row)
        {
            for(;;)
            {
                try
                {
                    // When we start a new row we always skip all empty lines first.
                    input->StartRow(1);
                    input->Read(row.m_UserLine);
                    return true;
                }
                catch(RuntimeMemoryException & e)
                {
                     throw ScopeStreamExceptionWithEvidence(E_EXTRACT_ROW_TOO_LONG,
                        { input->CurrentLineNumber() - 1, Configuration::GetGlobal().GetMaxOnDiskRowSize()},
                        [&input, &e] (stringstream &out) -> void
                     {
                         input->Dump(out);
                     });                     
                }
                catch (ScopeStreamException & e)
                {
                    // Handle different error during reading
                    switch(e.Error())
                    {
                    // Following error will terminate read
                    case ScopeStreamException::EndOfFile:                    
                    case ScopeStreamException::BadDevice:
                    case ScopeStreamException::PassSplitEndPoint:
                        return false;

                    case ScopeStreamException::StreamSplitUnexpectedEOF:
                         throw ScopeStreamExceptionWithEvidence(E_STREAM_SPLIT_UNEXPECTED_EOF,
                             {input->cbConsumed(), input->CurrentLineNumber() - 1},
                             [&input] (stringstream &out) -> void
                         {
                             input->Dump(out);
                         });                            

                    case ScopeStreamException::InvalidCharacter:
                        // Invalid character in input stream (found during character conversion)
                        throw ScopeStreamExceptionWithEvidence(E_EXTRACT_INVALID_CHARACTER,
                            { "UTF8", input->CurrentLineNumber() - 1}, e);
                    // Bad rows throw exception
                    case ScopeStreamException::NewLine:
                    case ScopeStreamException::NewLineExpected:
                        // Wrong number of columns in row - report error
                        throw ScopeStreamExceptionWithEvidence(E_EXTRACT_UNEXPECTED_NUMBER_COLUMNS,
                            { input->CurrentLineNumber() - 1, 1, input->CurrentField(), input->CurrentDelimiter() + 1},
                            [&input] (stringstream &out) -> void
                        {
                            input->Dump(out);
                        });

                    case ScopeStreamException::SkipFirstRowsUnexpectedEOF:
                        throw ScopeStreamExceptionWithEvidence(E_SKIP_FIRST_ROWS_UNEXPECTED_EOF,
                            { input->skipFirstRowsCount, input->NumFirstRowsSkipped() },
                            [&input] (stringstream &out) -> void
                         {
                             input->Dump(out);
                         });

                    default:
                        // for all other conversion error etc, we need to throw error
                        input->ThrowBadConvertException();
                    }
                }
            }
        }
    };
#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Extract_8_Data0, typename SV3_Extract_out0, UID_Process_9>
    {
    public:

        static bool FilterTransformRow(Extract_8_Data0 & input, SV3_Extract_out0 & output, IncrementalAllocator * alloc)
        {
            return true;
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_9>
    {
        typedef Microsoft::Analytics::Interfaces::IProcessor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_9());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(MakeBigString(L""))));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_9, "Constructor", ex);
                throw;
            }
        }

        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }

        cli::array<String^>^ ReadOnlyColumns()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<SV3_Extract_out0, UID_Process_9>
    {
    public:
        static void Marshal(Microsoft::Analytics::Interfaces::IRow^ managedRow, SV3_Extract_out0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_UserID, managedRow->Get<System::Int32>(0), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Age, managedRow->Get<System::Int32>(1), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Occupation, managedRow->Get<System::Int32>(2), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV3_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, std::string * outputFileNames, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = false;
        // If we have more than one input, we will random shuffle it
        if (inputCnt > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(inputs, inputs + inputCnt, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef Extractor<Extract_8_Data0, TextExtractPolicy<Extract_8_Data0, UID_Extract_8>, TextInputStream<TextInputStreamTraitsConst<'\t', '\n', '\0', false, true, UTF8, true, false, 0>, CosmosInput>> ExtractorType1_SV3_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV3_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV3_Extract>[inputCnt]);
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i].reset(new ExtractorType1_SV3_Extract(inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, InputStreamParameters('\t', '\n', '\0', nullptr, false, true, UTF8, true, false, 0), UID_Extract_8));
        }
        ExtractorType1_SV3_Extract ** extractor_0 = (ExtractorType1_SV3_Extract **)extractor_0_array.get();
        ULONG extractor_0_count = (ULONG)inputCnt;
        // Merge streams N->1
        typedef ParallelUnionAll<ExtractorType1_SV3_Extract, Extract_8_Data0, IsNativeOnlyVertex> UnionAllType_Extract_8_Process_9_connector;
        unique_ptr<UnionAllType_Extract_8_Process_9_connector> unionall_Extract_8_Process_9_connector_ptr(new UnionAllType_Extract_8_Process_9_connector(extractor_0,extractor_0_count,false,UID_ParallelUnionAll_Extract_8));
        UnionAllType_Extract_8_Process_9_connector * unionall_Extract_8_Process_9_connector = unionall_Extract_8_Process_9_connector_ptr.get();
        ULONG unionall_Extract_8_Process_9_connector_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Extract_8_Data0>> delegate_unionall_Extract_8_Process_9_connector_ptr (new OperatorDelegate<Extract_8_Data0>(OperatorDelegate<Extract_8_Data0>::FromOperator(unionall_Extract_8_Process_9_connector)));
        OperatorDelegate<Extract_8_Data0> * delegate_unionall_Extract_8_Process_9_connector = delegate_unionall_Extract_8_Process_9_connector_ptr.get();
        ULONG delegate_unionall_Extract_8_Process_9_connector_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Extract_8_Data0, SV3_Extract_out0> ProcessorType_Process_9;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_9> processor_Process_9_ptr (new ProcessorType_Process_9(ScopeProcessorManagedFactory::MakeSqlIp<Extract_8_Data0,SV3_Extract_out0,UID_Process_9>(delegate_unionall_Extract_8_Process_9_connector), delegate_unionall_Extract_8_Process_9_connector, UID_Process_9));
        ProcessorType_Process_9 * processor_Process_9 = processor_Process_9_ptr.get();
        ULONG processor_Process_9_count = 1;
        // Define outputer type
        typedef Outputer<ProcessorType_Process_9, SV3_Extract_out0, BinaryOutputPolicy<SV3_Extract_out0>, BinaryOutputStream, false> OutputerType2_SV3_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV3_Extract> outputer_SV3_Extract_out0_ptr(new OutputerType2_SV3_Extract(processor_Process_9, outputFileNames[0], x_outputBufSize, x_outputBufCnt, UID_SV3_Extract_out0));
        OutputerType2_SV3_Extract * outputer_SV3_Extract_out0 = outputer_SV3_Extract_out0_ptr.get();

        try
        {
            // Init operator chain
            outputer_SV3_Extract_out0->Init();
    
            // Execute the whole vertex by calling the GetNextRow on top operator
            SV3_Extract_out0 row;
            outputer_SV3_Extract_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV3_Extract_out0->Close();
        }
        catch(ExceptionWithStack & ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(ex.GetErrorDetails());
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV3_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<Extract_8_Data0, SV3_Extract_out0> * ScopeEngine::ScopeProcessorManagedFactory::MakeSqlIp<Extract_8_Data0, SV3_Extract_out0, UID_Process_9>(OperatorDelegate<Extract_8_Data0>*);
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV3_Extract
#pragma region SV4_Combine
#if defined(COMPILE_SV4_COMBINE) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_10 [] =
    {
        "UserID",
        "Age",
        "Occupation",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename SV3_Extract_out0, typename Process_10_Data0, UID_Process_10>
    {
    public:

        static bool FilterTransformRow(SV3_Extract_out0 & input, Process_10_Data0 & output, IncrementalAllocator * alloc)
        {
            InitializeStatics();
            int exceptionIndex = 0;
            try
            {
                output.m_UserID1 = input.m_UserID;
                exceptionIndex++;
                output.m_Age3 = input.m_Age;
                exceptionIndex++;
                output.m_Occupation4 = input.m_Occupation;
                exceptionIndex++;

                return true;
            }
            catch(...)
            {
                std::string exceptionString = "Exception thrown while evaluating expression \"";
                exceptionString += StringTable_Process_10[exceptionIndex];
                exceptionString += "\"";
                cout << exceptionString.c_str() << endl;
                throw RuntimeExpressionException(StringTable_Process_10[exceptionIndex]);
            }
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_10_Data0,UID_HashJoin_11>
    {
    public:
        struct KeyStruct
        {
            int m_Age3;
            int m_Occupation4;

            KeyStruct(Process_10_Data0 & c) :
                m_Age3(c.m_Age3),
                m_Occupation4(c.m_Occupation4)
            {
            }

            KeyStruct(const Process_10_Data0 & c, IncrementalAllocator * alloc) :
                m_Age3(const_cast<Process_10_Data0&>(c).m_Age3),
                m_Occupation4(const_cast<Process_10_Data0&>(c).m_Occupation4)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_Age3(c.m_Age3),
                m_Occupation4(c.m_Occupation4)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_Age3(const_cast<KeyStruct&>(c).m_Age3),
                m_Occupation4(const_cast<KeyStruct&>(c).m_Occupation4)
            {
            }

            KeyStruct() :
                m_Age3(0),
                m_Occupation4(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tAge3:\t" << row.m_Age3 << endl;
                os << "\tOccupation4:\t" << row.m_Occupation4 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_10_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_Age3, key.m_Age3)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_Occupation4, key.m_Occupation4)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_10_Data0 * n1, Process_10_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_Age3, (*n2).m_Age3)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_Occupation4, (*n2).m_Occupation4)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Process_10_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_Age3);
            }

            --depth;
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_Occupation4);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Process_10_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV3_Extract_out0,UID_HashJoin_11>
    {
    public:
        struct KeyStruct
        {
            int m_Age;
            int m_Occupation;

            KeyStruct(SV3_Extract_out0 & c) :
                m_Age(c.m_Age),
                m_Occupation(c.m_Occupation)
            {
            }

            KeyStruct(const SV3_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_Age(const_cast<SV3_Extract_out0&>(c).m_Age),
                m_Occupation(const_cast<SV3_Extract_out0&>(c).m_Occupation)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_Age(c.m_Age),
                m_Occupation(c.m_Occupation)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_Age(const_cast<KeyStruct&>(c).m_Age),
                m_Occupation(const_cast<KeyStruct&>(c).m_Occupation)
            {
            }

            KeyStruct() :
                m_Age(0),
                m_Occupation(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tAge:\t" << row.m_Age << endl;
                os << "\tOccupation:\t" << row.m_Occupation << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV3_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_Age, key.m_Age)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_Occupation, key.m_Occupation)) != 0)
                return r;
            return r;
        }

        static int Compare(SV3_Extract_out0 * n1, SV3_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_Age, (*n2).m_Age)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_Occupation, (*n2).m_Occupation)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV3_Extract_out0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_Age);
            }

            --depth;
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_Occupation);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV3_Extract_out0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_10_Data0,UID_HashJoin_11_0>
    {
    public:
        struct KeyStruct
        {
            int m_Age3;
            int m_Occupation4;

            KeyStruct(Process_10_Data0 & c) :
                m_Age3(c.m_Age3),
                m_Occupation4(c.m_Occupation4)
            {
            }

            KeyStruct(const Process_10_Data0 & c, IncrementalAllocator * alloc) :
                m_Age3(const_cast<Process_10_Data0&>(c).m_Age3),
                m_Occupation4(const_cast<Process_10_Data0&>(c).m_Occupation4)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_Age3(c.m_Age3),
                m_Occupation4(c.m_Occupation4)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_Age3(const_cast<KeyStruct&>(c).m_Age3),
                m_Occupation4(const_cast<KeyStruct&>(c).m_Occupation4)
            {
            }

            KeyStruct() :
                m_Age3(0),
                m_Occupation4(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tAge3:\t" << row.m_Age3 << endl;
                os << "\tOccupation4:\t" << row.m_Occupation4 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_10_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_Age3, key.m_Age3)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_Occupation4, key.m_Occupation4)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_10_Data0 * n1, Process_10_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_Age3, (*n2).m_Age3)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_Occupation4, (*n2).m_Occupation4)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV3_Extract_out0,UID_HashJoin_11_1>
    {
    public:
        struct KeyStruct
        {
            int m_Age;
            int m_Occupation;

            KeyStruct(SV3_Extract_out0 & c) :
                m_Age(c.m_Age),
                m_Occupation(c.m_Occupation)
            {
            }

            KeyStruct(const SV3_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_Age(const_cast<SV3_Extract_out0&>(c).m_Age),
                m_Occupation(const_cast<SV3_Extract_out0&>(c).m_Occupation)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_Age(c.m_Age),
                m_Occupation(c.m_Occupation)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_Age(const_cast<KeyStruct&>(c).m_Age),
                m_Occupation(const_cast<KeyStruct&>(c).m_Occupation)
            {
            }

            KeyStruct() :
                m_Age(0),
                m_Occupation(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tAge:\t" << row.m_Age << endl;
                os << "\tOccupation:\t" << row.m_Occupation << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV3_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_Age, key.m_Age)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_Occupation, key.m_Occupation)) != 0)
                return r;
            return r;
        }

        static int Compare(SV3_Extract_out0 * n1, SV3_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_Age, (*n2).m_Age)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_Occupation, (*n2).m_Occupation)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_HashJoin_11> 
    {
    public:
        typedef KeyComparePolicy<Process_10_Data0,UID_HashJoin_11_0> LeftKeyPolicy;
        typedef KeyComparePolicy<SV3_Extract_out0,UID_HashJoin_11_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const Process_10_Data0 * left, const SV3_Extract_out0 * right)
        {
            int r = 0;
            Process_10_Data0 * n1 = const_cast<Process_10_Data0 *>(left);
            SV3_Extract_out0 * n2 = const_cast<SV3_Extract_out0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_Age3, (*n2).m_Age)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_Occupation4, (*n2).m_Occupation)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(Process_10_Data0 * left, SV3_Extract_out0 * right, HashJoin_11_Data0 * out)
        {
                (*out).m_UserID1 = (*left).m_UserID1;
                (*out).m_Age3 = (*left).m_Age3;
                (*out).m_Occupation4 = (*left).m_Occupation4;
                (*out).m_UserID = (*right).m_UserID;
                (*out).m_Age = (*right).m_Age;
                (*out).m_Occupation = (*right).m_Occupation;
        }

        static void CopyLeftRow(Process_10_Data0 * left, HashJoin_11_Data0 * out)
        {
            (*out).m_UserID1 = (*left).m_UserID1;
            (*out).m_Age3 = (*left).m_Age3;
            (*out).m_Occupation4 = (*left).m_Occupation4;
        }

        static void NullifyRightSide(HashJoin_11_Data0 * out)
        {
        }

        static void CopyRightRow(SV3_Extract_out0 * right, HashJoin_11_Data0 * out)
        {
            (*out).m_UserID = (*right).m_UserID;
            (*out).m_Age = (*right).m_Age;
            (*out).m_Occupation = (*right).m_Occupation;
        }

        static void NullifyLeftSide(HashJoin_11_Data0 * out)
        {
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<Process_10_Data0, SV3_Extract_out0, HashJoin_11_Data0, UID_HashJoin_11>
    {
    public:
        typedef StdSort<Process_10_Data0> ProbeSorterAlgorithm;
        typedef StdSort<SV3_Extract_out0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<Process_10_Data0, SV3_Extract_out0, HashJoin_11_Data0, UID_HashJoin_11>
    {
    public:
        typedef HashCombinerPolicyV2<Process_10_Data0, SV3_Extract_out0, HashJoin_11_Data0, UID_HashJoin_11> P;

        typedef HashCombineKey_HashJoin_11 KeySchema;
        typedef HashCombineValue_HashJoin_11 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_11& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_Age3_Age);
                    result += ScopeHash(schema.m_Occupation4_Occupation);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV3_Extract_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_Age);
                    result += ScopeHash(schema.m_Occupation);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const Process_10_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_Age3);
                    result += ScopeHash(schema.m_Occupation4);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_11& left, const HashCombineKey_HashJoin_11& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_Age3_Age, right.m_Age3_Age)) return false;
                if (!ScopeTypeCompare_EqualEqual(left.m_Occupation4_Occupation, right.m_Occupation4_Occupation)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const Process_10_Data0& left, const HashCombineKey_HashJoin_11& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_Age3, right.m_Age3_Age)) return false;
                if (!ScopeTypeCompare_EqualEqual(left.m_Occupation4, right.m_Occupation4_Occupation)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 5897191422ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef GranularList<ValueSchema*, s_valueListSegmentSizeExponent, CharAllocator> UnderlyingValue;
        typedef UnderlyingValue Value;
        typedef Value::Iterator ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashMap<KeySchema, Value, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::MANY;

        static void UpdateValueList(CharAllocator& alloc, Value& valueList, ValueSchema* value)
        {
            valueList.EmplaceFront(alloc, value);
        }

        static ValueIterator ValueListBegin(Value& valueList)
        {
            return valueList.Begin();
        }
        
        static ValueIterator ValueListEnd(Value& valueList)
        {
            return valueList.End();
        }
        
        static size_t ValueListSize(const Value& valueList)
        {
            return valueList.Size();
        }

        static size_t IncrementValueListStats(Value& valueList)
        {
            return 0;
        }

    
        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const Process_10_Data0 & probe, const ValueSchema * build, HashJoin_11_Data0 & output)
        {
            // copy probe
            output.m_UserID1 = probe.m_UserID1;
            output.m_Age3 = probe.m_Age3;
            output.m_Occupation4 = probe.m_Occupation4;

            // copy build
            output.m_Age = scope_cast<int>(probe.m_Age3);
            output.m_Occupation = scope_cast<int>(probe.m_Occupation4);
            output.m_UserID = (*build).m_UserID;
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const Process_10_Data0 & probe, HashJoin_11_Data0 & output)
        {
            // copy probe
            output.m_UserID1 = probe.m_UserID1;
            output.m_Age3 = probe.m_Age3;
            output.m_Occupation4 = probe.m_Occupation4;

            // nullify build
        }

         static void DeepCopyBuildRowToKeyValue(const SV3_Extract_out0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
           key.m_Age3_Age = row.m_Age;
           key.m_Occupation4_Occupation = row.m_Occupation;
            // copy value
            (*value).m_UserID = row.m_UserID;
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, SV3_Extract_out0 & row)
         {
            // copy key
           row.m_Age = key.m_Age3_Age;
           row.m_Occupation = key.m_Occupation4_Occupation;
            // copy value
            row.m_UserID = (*value).m_UserID;
         }

        static void InsertOrUpdate(Hashtable& ht, const SV3_Extract_out0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            ValueSchema* value = new (alloc.Allocate(sizeof(ValueSchema))) ValueSchema();
            DeepCopyBuildRowToKeyValue(row, key, value, &alloc);

            Value vlist;
            auto it = ht.InsertWithPrecomputedHash(hash, { key, vlist });
            UpdateValueList(calloc, it.first->second, value);
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_12 [] =
    {
        "Age == Age3 && Occupation == Occupation4 && UserID != UserID1",
        "UserID",
        "UserID1",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename HashJoin_11_Data0, typename SV4_Combine_out0, UID_Process_12>
    {
    public:

        static bool FilterTransformRow(HashJoin_11_Data0 & input, SV4_Combine_out0 & output, IncrementalAllocator * alloc)
        {
            InitializeStatics();
            int exceptionIndex = 0;
            try
            {
                if (input.m_Age == input.m_Age3 && input.m_Occupation == input.m_Occupation4 && input.m_UserID != input.m_UserID1)
                {
                    exceptionIndex++;
                    output.m_aUserID = input.m_UserID;
                    exceptionIndex++;
                    output.m_bUserID = input.m_UserID1;
                    exceptionIndex++;
    
                    return true;
            }

            return false;
            }
            catch(...)
            {
                std::string exceptionString = "Exception thrown while evaluating expression \"";
                exceptionString += StringTable_Process_12[exceptionIndex];
                exceptionString += "\"";
                cout << exceptionString.c_str() << endl;
                throw RuntimeExpressionException(StringTable_Process_12[exceptionIndex]);
            }
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV4_Combine_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, std::string * outputFileNames, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV3_Extract_out0, BinaryExtractPolicy<SV3_Extract_out0>, BinaryInputStream> ExtractorType1_SV4_Combine;
        unique_ptr<ExtractorType1_SV4_Combine> extractor_0_ptr= make_unique<ExtractorType1_SV4_Combine>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV3_Extract_out0);
        ExtractorType1_SV4_Combine * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;

        // Define extractor type and construct object
        typedef Extractor<SV3_Extract_out0, BinaryExtractPolicy<SV3_Extract_out0>, BinaryInputStream> ExtractorType2_SV4_Combine;
        unique_ptr<ExtractorType2_SV4_Combine> extractor_1_ptr= make_unique<ExtractorType2_SV4_Combine>(inputs[1], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV3_Extract_out0);
        ExtractorType2_SV4_Combine * extractor_1 = extractor_1_ptr.get();
        ULONG extractor_1_count = 1;

        // Define the type of the operator
        typedef FilterTransformer<ExtractorType1_SV4_Combine, SV3_Extract_out0, Process_10_Data0, UID_Process_10> FilterTransformerType_Process_10;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_10> filterTransformer_Process_10_ptr (new FilterTransformerType_Process_10(extractor_0, UID_Process_10));
        FilterTransformerType_Process_10 * filterTransformer_Process_10 = filterTransformer_Process_10_ptr.get();
        ULONG filterTransformer_Process_10_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<FilterTransformerType_Process_10, Process_10_Data0, ExtractorType2_SV4_Combine, SV3_Extract_out0, HashJoin_11_Data0, HashInnerJoinerV2, InnerJoiner, UID_HashJoin_11> CombinerType_HashJoin_11;
        unique_ptr<CombinerType_HashJoin_11> combiner_HashJoin_11_ptr;
        combiner_HashJoin_11_ptr.reset(new CombinerType_HashJoin_11(filterTransformer_Process_10, extractor_1, UID_HashJoin_11, 1));

        CombinerType_HashJoin_11 * combiner_HashJoin_11 = combiner_HashJoin_11_ptr.get();
        ULONG combiner_HashJoin_11_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<CombinerType_HashJoin_11, HashJoin_11_Data0, SV4_Combine_out0, UID_Process_12> FilterTransformerType_Process_12;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_12> filterTransformer_Process_12_ptr (new FilterTransformerType_Process_12(combiner_HashJoin_11, UID_Process_12));
        FilterTransformerType_Process_12 * filterTransformer_Process_12 = filterTransformer_Process_12_ptr.get();
        ULONG filterTransformer_Process_12_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_12, SV4_Combine_out0, BinaryOutputPolicy<SV4_Combine_out0>, BinaryOutputStream, false> OutputerType3_SV4_Combine;
        // Construct operator and initialize it
        unique_ptr<OutputerType3_SV4_Combine> outputer_SV4_Combine_out0_ptr(new OutputerType3_SV4_Combine(filterTransformer_Process_12, outputFileNames[0], x_outputBufSize, x_outputBufCnt, UID_SV4_Combine_out0));
        OutputerType3_SV4_Combine * outputer_SV4_Combine_out0 = outputer_SV4_Combine_out0_ptr.get();

        try
        {
            // Init operator chain
            outputer_SV4_Combine_out0->Init();
    
            // Execute the whole vertex by calling the GetNextRow on top operator
            SV4_Combine_out0 row;
            outputer_SV4_Combine_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV4_Combine_out0->Close();
        }
        catch(ExceptionWithStack & ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(ex.GetErrorDetails());
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV4_Combine_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV4_Combine
#pragma region SV5_Combine
#if defined(COMPILE_SV5_COMBINE) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_16_Data0,UID_Process_19>
    {
    public:
        struct KeyStruct
        {
            int m_aUserID;
            int m_bUserID;

            KeyStruct(Process_16_Data0 & c) :
                m_aUserID(c.m_aUserID),
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const Process_16_Data0 & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<Process_16_Data0&>(c).m_aUserID),
                m_bUserID(const_cast<Process_16_Data0&>(c).m_bUserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_aUserID(c.m_aUserID),
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<KeyStruct&>(c).m_aUserID),
                m_bUserID(const_cast<KeyStruct&>(c).m_bUserID)
            {
            }

            KeyStruct() :
                m_aUserID(0),
                m_bUserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\taUserID:\t" << row.m_aUserID << endl;
                os << "\tbUserID:\t" << row.m_bUserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_16_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_aUserID, key.m_aUserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_bUserID, key.m_bUserID)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_16_Data0 * n1, Process_16_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_aUserID, (*n2).m_aUserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_bUserID, (*n2).m_bUserID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename Process_16_Data0, typename Process_16_Data0, UID_Process_19> 
    {
    public:
        
        AggregationPolicy()
            :
            m_aUserID_aUserID_FIRST("FIRST_aUserID_aUserID"),
            m_bUserID_bUserID_FIRST("FIRST_bUserID_bUserID"),
            m_partialagg4___partialagg4___SUM("SUM_partialagg4___partialagg4__"),
            m_partialagg5___partialagg5___SUM("SUM_partialagg5___partialagg5__"),
            m_partialagg6___partialagg6___SUM("SUM_partialagg6___partialagg6__")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<Process_16_Data0,UID_Process_19>::KeyType * input, Process_16_Data0 * output)
        {
            (*output).m_aUserID = (*input).m_aUserID;
            (*output).m_bUserID = (*input).m_bUserID;
        }

        // process input row, called for each row in key range
        void AddRow(Process_16_Data0 * input)
        {
            m_aUserID_aUserID_FIRST.Add((*input).m_aUserID);
            m_bUserID_bUserID_FIRST.Add((*input).m_bUserID);
            m_partialagg4___partialagg4___SUM.Add((*input).m_partialagg4__);
            m_partialagg5___partialagg5___SUM.Add((*input).m_partialagg5__);
            m_partialagg6___partialagg6___SUM.Add((*input).m_partialagg6__);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(Process_16_Data0 * output)
        {
            m_aUserID_aUserID_FIRST.Aggregate(&(*output).m_aUserID);
            m_bUserID_bUserID_FIRST.Aggregate(&(*output).m_bUserID);
            m_partialagg4___partialagg4___SUM.Aggregate(&(*output).m_partialagg4__);
            m_partialagg5___partialagg5___SUM.Aggregate(&(*output).m_partialagg5__);
            m_partialagg6___partialagg6___SUM.Aggregate(&(*output).m_partialagg6__);
        }

        // write aggregated data
        void GetValue(Process_16_Data0 * output)
        {
            m_aUserID_aUserID_FIRST.GetValue(&(*output).m_aUserID);
            m_bUserID_bUserID_FIRST.GetValue(&(*output).m_bUserID);
            m_partialagg4___partialagg4___SUM.GetValue(&(*output).m_partialagg4__);
            m_partialagg5___partialagg5___SUM.GetValue(&(*output).m_partialagg5__);
            m_partialagg6___partialagg6___SUM.GetValue(&(*output).m_partialagg6__);
        }

        // reset for new key
        void Reset()
        {
            m_aUserID_aUserID_FIRST.Reset();
            m_bUserID_bUserID_FIRST.Reset();
            m_partialagg4___partialagg4___SUM.Reset();
            m_partialagg5___partialagg5___SUM.Reset();
            m_partialagg6___partialagg6___SUM.Reset();
        }

        // store statistics
        void WriteRuntimeStats(TreeNode & root)
        {
            m_aUserID_aUserID_FIRST.WriteRuntimeStats(root);
            m_bUserID_bUserID_FIRST.WriteRuntimeStats(root);
            m_partialagg4___partialagg4___SUM.WriteRuntimeStats(root);
            m_partialagg5___partialagg5___SUM.WriteRuntimeStats(root);
            m_partialagg6___partialagg6___SUM.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            OperatorRequirements result;
            result.Add(m_aUserID_aUserID_FIRST.GetOperatorRequirements());
            result.Add(m_bUserID_bUserID_FIRST.GetOperatorRequirements());
            result.Add(m_partialagg4___partialagg4___SUM.GetOperatorRequirements());
            result.Add(m_partialagg5___partialagg5___SUM.GetOperatorRequirements());
            result.Add(m_partialagg6___partialagg6___SUM.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<int> m_aUserID_aUserID_FIRST;
        Aggregate_FIRST<int> m_bUserID_bUserID_FIRST;
        Aggregate_SUM<NativeNullable<__int64>,NativeNullable<__int64>> m_partialagg4___partialagg4___SUM;
        Aggregate_SUM<NativeNullable<double>,NativeNullable<double>> m_partialagg5___partialagg5___SUM;
        Aggregate_SUM<NativeNullable<double>,NativeNullable<double>> m_partialagg6___partialagg6___SUM;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_16_Data0,UID_Process_18>
    {
    public:
        struct KeyStruct
        {
            int m_aUserID;
            int m_bUserID;

            KeyStruct(Process_16_Data0 & c) :
                m_aUserID(c.m_aUserID),
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const Process_16_Data0 & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<Process_16_Data0&>(c).m_aUserID),
                m_bUserID(const_cast<Process_16_Data0&>(c).m_bUserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_aUserID(c.m_aUserID),
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<KeyStruct&>(c).m_aUserID),
                m_bUserID(const_cast<KeyStruct&>(c).m_bUserID)
            {
            }

            KeyStruct() :
                m_aUserID(0),
                m_bUserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\taUserID:\t" << row.m_aUserID << endl;
                os << "\tbUserID:\t" << row.m_bUserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_16_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_aUserID, key.m_aUserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_bUserID, key.m_bUserID)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_16_Data0 * n1, Process_16_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_aUserID, (*n2).m_aUserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_bUserID, (*n2).m_bUserID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Process_16_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_aUserID);
            }

            --depth;
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_bUserID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Process_16_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_13 [] =
    {
        "MovieID",
        "UserID",
        "Rating",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename SV1_Extract_out0, typename Process_13_Data0, UID_Process_13>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_out0 & input, Process_13_Data0 & output, IncrementalAllocator * alloc)
        {
            InitializeStatics();
            int exceptionIndex = 0;
            try
            {
                output.m_MovieID1 = input.m_MovieID;
                exceptionIndex++;
                output.m_UserID2 = input.m_UserID;
                exceptionIndex++;
                output.m_Rating3 = input.m_Rating;
                exceptionIndex++;

                return true;
            }
            catch(...)
            {
                std::string exceptionString = "Exception thrown while evaluating expression \"";
                exceptionString += StringTable_Process_13[exceptionIndex];
                exceptionString += "\"";
                cout << exceptionString.c_str() << endl;
                throw RuntimeExpressionException(StringTable_Process_13[exceptionIndex]);
            }
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_13_Data0,UID_HashJoin_14>
    {
    public:
        struct KeyStruct
        {
            int m_UserID2;

            KeyStruct(Process_13_Data0 & c) :
                m_UserID2(c.m_UserID2)
            {
            }

            KeyStruct(const Process_13_Data0 & c, IncrementalAllocator * alloc) :
                m_UserID2(const_cast<Process_13_Data0&>(c).m_UserID2)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_UserID2(c.m_UserID2)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_UserID2(const_cast<KeyStruct&>(c).m_UserID2)
            {
            }

            KeyStruct() :
                m_UserID2(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tUserID2:\t" << row.m_UserID2 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_13_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_UserID2, key.m_UserID2)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_13_Data0 * n1, Process_13_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_UserID2, (*n2).m_UserID2)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Process_13_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_UserID2);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Process_13_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV4_Combine_out0,UID_HashJoin_14>
    {
    public:
        struct KeyStruct
        {
            int m_bUserID;

            KeyStruct(SV4_Combine_out0 & c) :
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const SV4_Combine_out0 & c, IncrementalAllocator * alloc) :
                m_bUserID(const_cast<SV4_Combine_out0&>(c).m_bUserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_bUserID(const_cast<KeyStruct&>(c).m_bUserID)
            {
            }

            KeyStruct() :
                m_bUserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tbUserID:\t" << row.m_bUserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV4_Combine_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_bUserID, key.m_bUserID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV4_Combine_out0 * n1, SV4_Combine_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_bUserID, (*n2).m_bUserID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV4_Combine_out0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_bUserID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV4_Combine_out0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_13_Data0,UID_HashJoin_14_0>
    {
    public:
        struct KeyStruct
        {
            int m_UserID2;

            KeyStruct(Process_13_Data0 & c) :
                m_UserID2(c.m_UserID2)
            {
            }

            KeyStruct(const Process_13_Data0 & c, IncrementalAllocator * alloc) :
                m_UserID2(const_cast<Process_13_Data0&>(c).m_UserID2)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_UserID2(c.m_UserID2)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_UserID2(const_cast<KeyStruct&>(c).m_UserID2)
            {
            }

            KeyStruct() :
                m_UserID2(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tUserID2:\t" << row.m_UserID2 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_13_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_UserID2, key.m_UserID2)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_13_Data0 * n1, Process_13_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_UserID2, (*n2).m_UserID2)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV4_Combine_out0,UID_HashJoin_14_1>
    {
    public:
        struct KeyStruct
        {
            int m_bUserID;

            KeyStruct(SV4_Combine_out0 & c) :
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const SV4_Combine_out0 & c, IncrementalAllocator * alloc) :
                m_bUserID(const_cast<SV4_Combine_out0&>(c).m_bUserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_bUserID(const_cast<KeyStruct&>(c).m_bUserID)
            {
            }

            KeyStruct() :
                m_bUserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tbUserID:\t" << row.m_bUserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV4_Combine_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_bUserID, key.m_bUserID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV4_Combine_out0 * n1, SV4_Combine_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_bUserID, (*n2).m_bUserID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_HashJoin_14> 
    {
    public:
        typedef KeyComparePolicy<Process_13_Data0,UID_HashJoin_14_0> LeftKeyPolicy;
        typedef KeyComparePolicy<SV4_Combine_out0,UID_HashJoin_14_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const Process_13_Data0 * left, const SV4_Combine_out0 * right)
        {
            int r = 0;
            Process_13_Data0 * n1 = const_cast<Process_13_Data0 *>(left);
            SV4_Combine_out0 * n2 = const_cast<SV4_Combine_out0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_UserID2, (*n2).m_bUserID)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(Process_13_Data0 * left, SV4_Combine_out0 * right, HashJoin_14_Data0 * out)
        {
                (*out).m_MovieID1 = (*left).m_MovieID1;
                (*out).m_Rating3 = (*left).m_Rating3;
                (*out).m_aUserID = (*right).m_aUserID;
                (*out).m_bUserID = (*right).m_bUserID;
        }

        static void CopyLeftRow(Process_13_Data0 * left, HashJoin_14_Data0 * out)
        {
            (*out).m_MovieID1 = (*left).m_MovieID1;
            (*out).m_Rating3 = (*left).m_Rating3;
        }

        static void NullifyRightSide(HashJoin_14_Data0 * out)
        {
        }

        static void CopyRightRow(SV4_Combine_out0 * right, HashJoin_14_Data0 * out)
        {
            (*out).m_aUserID = (*right).m_aUserID;
            (*out).m_bUserID = (*right).m_bUserID;
        }

        static void NullifyLeftSide(HashJoin_14_Data0 * out)
        {
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<Process_13_Data0, SV4_Combine_out0, HashJoin_14_Data0, UID_HashJoin_14>
    {
    public:
        typedef StdSort<Process_13_Data0> ProbeSorterAlgorithm;
        typedef StdSort<SV4_Combine_out0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<Process_13_Data0, SV4_Combine_out0, HashJoin_14_Data0, UID_HashJoin_14>
    {
    public:
        typedef HashCombinerPolicyV2<Process_13_Data0, SV4_Combine_out0, HashJoin_14_Data0, UID_HashJoin_14> P;

        typedef HashCombineKey_HashJoin_14 KeySchema;
        typedef HashCombineValue_HashJoin_14 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_14& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_UserID2_bUserID);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV4_Combine_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_bUserID);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const Process_13_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_UserID2);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_14& left, const HashCombineKey_HashJoin_14& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_UserID2_bUserID, right.m_UserID2_bUserID)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const Process_13_Data0& left, const HashCombineKey_HashJoin_14& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_UserID2, right.m_UserID2_bUserID)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 1625292799ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef GranularList<ValueSchema*, s_valueListSegmentSizeExponent, CharAllocator> UnderlyingValue;
        typedef UnderlyingValue Value;
        typedef Value::Iterator ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashMap<KeySchema, Value, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::MANY;

        static void UpdateValueList(CharAllocator& alloc, Value& valueList, ValueSchema* value)
        {
            valueList.EmplaceFront(alloc, value);
        }

        static ValueIterator ValueListBegin(Value& valueList)
        {
            return valueList.Begin();
        }
        
        static ValueIterator ValueListEnd(Value& valueList)
        {
            return valueList.End();
        }
        
        static size_t ValueListSize(const Value& valueList)
        {
            return valueList.Size();
        }

        static size_t IncrementValueListStats(Value& valueList)
        {
            return 0;
        }

    
        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const Process_13_Data0 & probe, const ValueSchema * build, HashJoin_14_Data0 & output)
        {
            // copy probe
            output.m_MovieID1 = probe.m_MovieID1;
            output.m_Rating3 = probe.m_Rating3;

            // copy build
            output.m_bUserID = scope_cast<int>(probe.m_UserID2);
            output.m_aUserID = (*build).m_aUserID;
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const Process_13_Data0 & probe, HashJoin_14_Data0 & output)
        {
            // copy probe
            output.m_MovieID1 = probe.m_MovieID1;
            output.m_Rating3 = probe.m_Rating3;

            // nullify build
        }

         static void DeepCopyBuildRowToKeyValue(const SV4_Combine_out0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
           key.m_UserID2_bUserID = row.m_bUserID;
            // copy value
            (*value).m_aUserID = row.m_aUserID;
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, SV4_Combine_out0 & row)
         {
            // copy key
           row.m_bUserID = key.m_UserID2_bUserID;
            // copy value
            row.m_aUserID = (*value).m_aUserID;
         }

        static void InsertOrUpdate(Hashtable& ht, const SV4_Combine_out0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            ValueSchema* value = new (alloc.Allocate(sizeof(ValueSchema))) ValueSchema();
            DeepCopyBuildRowToKeyValue(row, key, value, &alloc);

            Value vlist;
            auto it = ht.InsertWithPrecomputedHash(hash, { key, vlist });
            UpdateValueList(calloc, it.first->second, value);
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<HashJoin_14_Data0,UID_HashJoin_15>
    {
    public:
        struct KeyStruct
        {
            int m_MovieID1;
            int m_aUserID;

            KeyStruct(HashJoin_14_Data0 & c) :
                m_MovieID1(c.m_MovieID1),
                m_aUserID(c.m_aUserID)
            {
            }

            KeyStruct(const HashJoin_14_Data0 & c, IncrementalAllocator * alloc) :
                m_MovieID1(const_cast<HashJoin_14_Data0&>(c).m_MovieID1),
                m_aUserID(const_cast<HashJoin_14_Data0&>(c).m_aUserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_MovieID1(c.m_MovieID1),
                m_aUserID(c.m_aUserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_MovieID1(const_cast<KeyStruct&>(c).m_MovieID1),
                m_aUserID(const_cast<KeyStruct&>(c).m_aUserID)
            {
            }

            KeyStruct() :
                m_MovieID1(0),
                m_aUserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tMovieID1:\t" << row.m_MovieID1 << endl;
                os << "\taUserID:\t" << row.m_aUserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(HashJoin_14_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_MovieID1, key.m_MovieID1)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_aUserID, key.m_aUserID)) != 0)
                return r;
            return r;
        }

        static int Compare(HashJoin_14_Data0 * n1, HashJoin_14_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_MovieID1, (*n2).m_MovieID1)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_aUserID, (*n2).m_aUserID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(HashJoin_14_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_MovieID1);
            }

            --depth;
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_aUserID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(HashJoin_14_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_out0,UID_HashJoin_15>
    {
    public:
        struct KeyStruct
        {
            int m_MovieID;
            int m_UserID;

            KeyStruct(SV1_Extract_out0 & c) :
                m_MovieID(c.m_MovieID),
                m_UserID(c.m_UserID)
            {
            }

            KeyStruct(const SV1_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_MovieID(const_cast<SV1_Extract_out0&>(c).m_MovieID),
                m_UserID(const_cast<SV1_Extract_out0&>(c).m_UserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_MovieID(c.m_MovieID),
                m_UserID(c.m_UserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_MovieID(const_cast<KeyStruct&>(c).m_MovieID),
                m_UserID(const_cast<KeyStruct&>(c).m_UserID)
            {
            }

            KeyStruct() :
                m_MovieID(0),
                m_UserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tMovieID:\t" << row.m_MovieID << endl;
                os << "\tUserID:\t" << row.m_UserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_MovieID, key.m_MovieID)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_UserID, key.m_UserID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_out0 * n1, SV1_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_MovieID, (*n2).m_MovieID)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_UserID, (*n2).m_UserID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV1_Extract_out0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_MovieID);
            }

            --depth;
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_UserID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV1_Extract_out0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<HashJoin_14_Data0,UID_HashJoin_15_0>
    {
    public:
        struct KeyStruct
        {
            int m_MovieID1;
            int m_aUserID;

            KeyStruct(HashJoin_14_Data0 & c) :
                m_MovieID1(c.m_MovieID1),
                m_aUserID(c.m_aUserID)
            {
            }

            KeyStruct(const HashJoin_14_Data0 & c, IncrementalAllocator * alloc) :
                m_MovieID1(const_cast<HashJoin_14_Data0&>(c).m_MovieID1),
                m_aUserID(const_cast<HashJoin_14_Data0&>(c).m_aUserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_MovieID1(c.m_MovieID1),
                m_aUserID(c.m_aUserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_MovieID1(const_cast<KeyStruct&>(c).m_MovieID1),
                m_aUserID(const_cast<KeyStruct&>(c).m_aUserID)
            {
            }

            KeyStruct() :
                m_MovieID1(0),
                m_aUserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tMovieID1:\t" << row.m_MovieID1 << endl;
                os << "\taUserID:\t" << row.m_aUserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(HashJoin_14_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_MovieID1, key.m_MovieID1)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_aUserID, key.m_aUserID)) != 0)
                return r;
            return r;
        }

        static int Compare(HashJoin_14_Data0 * n1, HashJoin_14_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_MovieID1, (*n2).m_MovieID1)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_aUserID, (*n2).m_aUserID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV1_Extract_out0,UID_HashJoin_15_1>
    {
    public:
        struct KeyStruct
        {
            int m_MovieID;
            int m_UserID;

            KeyStruct(SV1_Extract_out0 & c) :
                m_MovieID(c.m_MovieID),
                m_UserID(c.m_UserID)
            {
            }

            KeyStruct(const SV1_Extract_out0 & c, IncrementalAllocator * alloc) :
                m_MovieID(const_cast<SV1_Extract_out0&>(c).m_MovieID),
                m_UserID(const_cast<SV1_Extract_out0&>(c).m_UserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_MovieID(c.m_MovieID),
                m_UserID(c.m_UserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_MovieID(const_cast<KeyStruct&>(c).m_MovieID),
                m_UserID(const_cast<KeyStruct&>(c).m_UserID)
            {
            }

            KeyStruct() :
                m_MovieID(0),
                m_UserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tMovieID:\t" << row.m_MovieID << endl;
                os << "\tUserID:\t" << row.m_UserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV1_Extract_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_MovieID, key.m_MovieID)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_UserID, key.m_UserID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV1_Extract_out0 * n1, SV1_Extract_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_MovieID, (*n2).m_MovieID)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_UserID, (*n2).m_UserID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_HashJoin_15> 
    {
    public:
        typedef KeyComparePolicy<HashJoin_14_Data0,UID_HashJoin_15_0> LeftKeyPolicy;
        typedef KeyComparePolicy<SV1_Extract_out0,UID_HashJoin_15_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const HashJoin_14_Data0 * left, const SV1_Extract_out0 * right)
        {
            int r = 0;
            HashJoin_14_Data0 * n1 = const_cast<HashJoin_14_Data0 *>(left);
            SV1_Extract_out0 * n2 = const_cast<SV1_Extract_out0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_MovieID1, (*n2).m_MovieID)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_aUserID, (*n2).m_UserID)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(HashJoin_14_Data0 * left, SV1_Extract_out0 * right, HashJoin_15_Data0 * out)
        {
                (*out).m_aUserID = (*left).m_aUserID;
                (*out).m_bUserID = (*left).m_bUserID;
                (*out).m_Rating3 = (*left).m_Rating3;
                (*out).m_Rating = (*right).m_Rating;
        }

        static void CopyLeftRow(HashJoin_14_Data0 * left, HashJoin_15_Data0 * out)
        {
            (*out).m_aUserID = (*left).m_aUserID;
            (*out).m_bUserID = (*left).m_bUserID;
            (*out).m_Rating3 = (*left).m_Rating3;
        }

        static void NullifyRightSide(HashJoin_15_Data0 * out)
        {
        }

        static void CopyRightRow(SV1_Extract_out0 * right, HashJoin_15_Data0 * out)
        {
            (*out).m_Rating = (*right).m_Rating;
        }

        static void NullifyLeftSide(HashJoin_15_Data0 * out)
        {
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<HashJoin_14_Data0, SV1_Extract_out0, HashJoin_15_Data0, UID_HashJoin_15>
    {
    public:
        typedef StdSort<HashJoin_14_Data0> ProbeSorterAlgorithm;
        typedef StdSort<SV1_Extract_out0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<HashJoin_14_Data0, SV1_Extract_out0, HashJoin_15_Data0, UID_HashJoin_15>
    {
    public:
        typedef HashCombinerPolicyV2<HashJoin_14_Data0, SV1_Extract_out0, HashJoin_15_Data0, UID_HashJoin_15> P;

        typedef HashCombineKey_HashJoin_15 KeySchema;
        typedef HashCombineValue_HashJoin_15 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_15& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_MovieID1_MovieID);
                    result += ScopeHash(schema.m_aUserID_UserID);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV1_Extract_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_MovieID);
                    result += ScopeHash(schema.m_UserID);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashJoin_14_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_MovieID1);
                    result += ScopeHash(schema.m_aUserID);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_15& left, const HashCombineKey_HashJoin_15& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_MovieID1_MovieID, right.m_MovieID1_MovieID)) return false;
                if (!ScopeTypeCompare_EqualEqual(left.m_aUserID_UserID, right.m_aUserID_UserID)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const HashJoin_14_Data0& left, const HashCombineKey_HashJoin_15& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_MovieID1, right.m_MovieID1_MovieID)) return false;
                if (!ScopeTypeCompare_EqualEqual(left.m_aUserID, right.m_aUserID_UserID)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 1625292799ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef GranularList<ValueSchema*, s_valueListSegmentSizeExponent, CharAllocator> UnderlyingValue;
        typedef UnderlyingValue Value;
        typedef Value::Iterator ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashMap<KeySchema, Value, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::MANY;

        static void UpdateValueList(CharAllocator& alloc, Value& valueList, ValueSchema* value)
        {
            valueList.EmplaceFront(alloc, value);
        }

        static ValueIterator ValueListBegin(Value& valueList)
        {
            return valueList.Begin();
        }
        
        static ValueIterator ValueListEnd(Value& valueList)
        {
            return valueList.End();
        }
        
        static size_t ValueListSize(const Value& valueList)
        {
            return valueList.Size();
        }

        static size_t IncrementValueListStats(Value& valueList)
        {
            return 0;
        }

    
        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const HashJoin_14_Data0 & probe, const ValueSchema * build, HashJoin_15_Data0 & output)
        {
            // copy probe
            output.m_aUserID = probe.m_aUserID;
            output.m_bUserID = probe.m_bUserID;
            output.m_Rating3 = probe.m_Rating3;

            // copy build
            output.m_Rating = (*build).m_Rating;
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const HashJoin_14_Data0 & probe, HashJoin_15_Data0 & output)
        {
            // copy probe
            output.m_aUserID = probe.m_aUserID;
            output.m_bUserID = probe.m_bUserID;
            output.m_Rating3 = probe.m_Rating3;

            // nullify build
        }

         static void DeepCopyBuildRowToKeyValue(const SV1_Extract_out0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
           key.m_MovieID1_MovieID = row.m_MovieID;
           key.m_aUserID_UserID = row.m_UserID;
            // copy value
            (*value).m_Rating = row.m_Rating;
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, SV1_Extract_out0 & row)
         {
            // copy key
           row.m_MovieID = key.m_MovieID1_MovieID;
           row.m_UserID = key.m_aUserID_UserID;
            // copy value
            row.m_Rating = (*value).m_Rating;
         }

        static void InsertOrUpdate(Hashtable& ht, const SV1_Extract_out0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            ValueSchema* value = new (alloc.Allocate(sizeof(ValueSchema))) ValueSchema();
            DeepCopyBuildRowToKeyValue(row, key, value, &alloc);

            Value vlist;
            auto it = ht.InsertWithPrecomputedHash(hash, { key, vlist });
            UpdateValueList(calloc, it.first->second, value);
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename HashJoin_15_Data0, typename Process_16_Data0, UID_Process_16>
    {
    public:

        static bool FilterTransformRow(HashJoin_15_Data0 & input, Process_16_Data0 & output, IncrementalAllocator * alloc)
        {
           output.m_aUserID = input.m_aUserID;
           output.m_bUserID = input.m_bUserID;
            return true;
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_16>
    {
        typedef Microsoft::Analytics::Interfaces::IProcessor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_16());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(MakeBigString(L""))));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_16, "Constructor", ex);
                throw;
            }
        }

        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }

        cli::array<String^>^ ReadOnlyColumns()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<Process_16_Data0, UID_Process_16>
    {
    public:
        static void Marshal(Microsoft::Analytics::Interfaces::IRow^ managedRow, Process_16_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_partialagg4__, managedRow->Get<System::Nullable<System::Int64>>(2), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_partialagg5__, managedRow->Get<System::Nullable<System::Double>>(3), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_partialagg6__, managedRow->Get<System::Nullable<System::Double>>(4), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Process_16_Data0, typename Process_16_Data0, UID_Process_17>
    {
    public:

        static bool FilterTransformRow(Process_16_Data0 & input, Process_16_Data0 & output, IncrementalAllocator * alloc)
        {
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)

    template<>
    struct HashAggregationPolicyV2<Process_16_Data0, Process_16_Data0, UID_Process_17>
    {
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0)
            {
            }

            Hash(INT64 seed) : m_seed(seed)
            {
            }

            INT64 operator () (const SV4_Combine_out0& schema) const
            {
                INT64 result = m_seed;
                result += ScopeHash(schema.m_aUserID);
                result += ScopeHash(schema.m_bUserID);
                return result;
            }
        };
        struct EqualTo
        {
            bool operator () (const SV4_Combine_out0& left, const SV4_Combine_out0& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_aUserID, right.m_aUserID)) return false;
                if (!ScopeTypeCompare_EqualEqual(left.m_bUserID, right.m_bUserID)) return false;
                return true;
            }
        };
        struct RowHash
        {
            const INT64 m_seed;

            RowHash() : m_seed((INT64)0) {}
            RowHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const Process_16_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_aUserID);
                    result += ScopeHash(schema.m_bUserID);
                
                return result;
            }
        };

        struct RowEqualTo
        {
            bool operator () (const Process_16_Data0& left, const SV4_Combine_out0& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_aUserID, right.m_aUserID)) return false;
                if (!ScopeTypeCompare_EqualEqual(left.m_bUserID, right.m_bUserID)) return false;
                return true;
            }
        };
 
        typedef SV4_Combine_out0 KeySchema;
        typedef HashAggregatorState_Process_17 ValueSchema;

        static const RowHash& RowHashF()
        {
            static RowHash hash;
            return hash;
        }
        
        static const RowEqualTo& RowPredF()
        {
            static RowEqualTo pred;
            return pred;
        }

        static const size_t s_memoryQuota{ 1625292799ULL }; // Cosmos default is 2GB
        
        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // initial number of buckets in the hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        static       double MaxLoadFactor() { return 2.; }
        static const bool   s_valueSchemaHasDeepData{ false };

        // Shallow copy input schema fields to key schema
        static void ShallowCopyRowToKey(const Process_16_Data0 & row, KeySchema & key)
        {
           key.m_aUserID = row.m_aUserID;
           key.m_bUserID = row.m_bUserID;
        }

        static void DeepCopyRowToKey(const Process_16_Data0 & row, KeySchema & key, IncrementalAllocator* alloc)
        {
           key.m_aUserID = row.m_aUserID;
           key.m_bUserID = row.m_bUserID;
        }

        // Init value schema fields with default aggregate states, shallow copy
        static void ShallowCopyRowToValue(const Process_16_Data0 & row, ValueSchema & value)
        {
           Aggregate_SUM<NativeNullable<__int64>, NativeNullable<__int64>>::Init(value.m_SUM_partialagg4__, value.m_SUM_fEmpty_partialagg4__, row.m_partialagg4__);
           Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::Init(value.m_SUM_partialagg5__, value.m_SUM_fEmpty_partialagg5__, row.m_partialagg5__);
           Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::Init(value.m_SUM_partialagg6__, value.m_SUM_fEmpty_partialagg6__, row.m_partialagg6__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void DeepCopyRowToValue(const Process_16_Data0 & row, ValueSchema & value, IncrementalAllocator* alloc)
        {
           Aggregate_SUM<NativeNullable<__int64>, NativeNullable<__int64>>::Init(value.m_SUM_partialagg4__, value.m_SUM_fEmpty_partialagg4__, row.m_partialagg4__);
           Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::Init(value.m_SUM_partialagg5__, value.m_SUM_fEmpty_partialagg5__, row.m_partialagg5__);
           Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::Init(value.m_SUM_partialagg6__, value.m_SUM_fEmpty_partialagg6__, row.m_partialagg6__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void UpdateValue(ValueSchema & state, const Process_16_Data0 & update, IncrementalAllocator* alloc)
        {
                Aggregate_SUM<NativeNullable<__int64>, NativeNullable<__int64>>::UpdateState(state.m_SUM_partialagg4__, state.m_SUM_fEmpty_partialagg4__, update.m_partialagg4__);
                Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::UpdateState(state.m_SUM_partialagg5__, state.m_SUM_fEmpty_partialagg5__, update.m_partialagg5__);
                Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::UpdateState(state.m_SUM_partialagg6__, state.m_SUM_fEmpty_partialagg6__, update.m_partialagg6__);
        }


        // Shallow copy key and aggregated states to the output
        static void GetOutput(const KeySchema & key, const ValueSchema & value, Process_16_Data0 & row)
        {
            row.m_aUserID = key.m_aUserID;
            row.m_bUserID = key.m_bUserID;
            Aggregate_SUM<NativeNullable<__int64>, NativeNullable<__int64>>::GetAggregatedValue(value.m_SUM_partialagg4__, value.m_SUM_fEmpty_partialagg4__, &row.m_partialagg4__);
            Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::GetAggregatedValue(value.m_SUM_partialagg5__, value.m_SUM_fEmpty_partialagg5__, &row.m_partialagg5__);
            Aggregate_SUM<NativeNullable<double>, NativeNullable<double>>::GetAggregatedValue(value.m_SUM_partialagg6__, value.m_SUM_fEmpty_partialagg6__, &row.m_partialagg6__);
        }


    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Process_16_Data0, typename Process_16_Data0, UID_Process_19>
    {
    public:

        static bool FilterTransformRow(Process_16_Data0 & input, Process_16_Data0 & output, IncrementalAllocator * alloc)
        {
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Process_16_Data0, typename SV5_Combine_out0, UID_Process_20>
    {
    public:

        static bool FilterTransformRow(Process_16_Data0 & input, SV5_Combine_out0 & output, IncrementalAllocator * alloc)
        {
           output.m_aUserID = input.m_aUserID;
           output.m_bUserID = input.m_bUserID;
            return true;
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_20>
    {
        typedef Microsoft::Analytics::Interfaces::IProcessor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_20());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(MakeBigString(L""))));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_20, "Constructor", ex);
                throw;
            }
        }

        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }

        cli::array<String^>^ ReadOnlyColumns()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<SV5_Combine_out0, UID_Process_20>
    {
    public:
        static void Marshal(Microsoft::Analytics::Interfaces::IRow^ managedRow, SV5_Combine_out0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Similarity, managedRow->Get<System::Double>(0), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV5_Combine_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, std::string * outputFileNames, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = false;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_out0, BinaryExtractPolicy<SV1_Extract_out0>, BinaryInputStream> ExtractorType1_SV5_Combine;
        unique_ptr<ExtractorType1_SV5_Combine> extractor_0_ptr= make_unique<ExtractorType1_SV5_Combine>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType1_SV5_Combine * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;

        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_out0, BinaryExtractPolicy<SV1_Extract_out0>, BinaryInputStream> ExtractorType2_SV5_Combine;
        unique_ptr<ExtractorType2_SV5_Combine> extractor_1_ptr= make_unique<ExtractorType2_SV5_Combine>(inputs[1], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType2_SV5_Combine * extractor_1 = extractor_1_ptr.get();
        ULONG extractor_1_count = 1;

        // Define extractor type and construct object
        typedef Extractor<SV4_Combine_out0, BinaryExtractPolicy<SV4_Combine_out0>, BinaryInputStream> ExtractorType3_SV5_Combine;
        unique_ptr<ExtractorType3_SV5_Combine> extractor_2_ptr= make_unique<ExtractorType3_SV5_Combine>(inputs[2], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV4_Combine_out0);
        ExtractorType3_SV5_Combine * extractor_2 = extractor_2_ptr.get();
        ULONG extractor_2_count = 1;

        // Define the type of the operator
        typedef FilterTransformer<ExtractorType1_SV5_Combine, SV1_Extract_out0, Process_13_Data0, UID_Process_13> FilterTransformerType_Process_13;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_13> filterTransformer_Process_13_ptr (new FilterTransformerType_Process_13(extractor_0, UID_Process_13));
        FilterTransformerType_Process_13 * filterTransformer_Process_13 = filterTransformer_Process_13_ptr.get();
        ULONG filterTransformer_Process_13_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<FilterTransformerType_Process_13, Process_13_Data0, ExtractorType3_SV5_Combine, SV4_Combine_out0, HashJoin_14_Data0, HashInnerJoinerV2, InnerJoiner, UID_HashJoin_14> CombinerType_HashJoin_14;
        unique_ptr<CombinerType_HashJoin_14> combiner_HashJoin_14_ptr;
        combiner_HashJoin_14_ptr.reset(new CombinerType_HashJoin_14(filterTransformer_Process_13, extractor_2, UID_HashJoin_14, 1));

        CombinerType_HashJoin_14 * combiner_HashJoin_14 = combiner_HashJoin_14_ptr.get();
        ULONG combiner_HashJoin_14_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<CombinerType_HashJoin_14, HashJoin_14_Data0, ExtractorType2_SV5_Combine, SV1_Extract_out0, HashJoin_15_Data0, HashInnerJoinerV2, InnerJoiner, UID_HashJoin_15> CombinerType_HashJoin_15;
        unique_ptr<CombinerType_HashJoin_15> combiner_HashJoin_15_ptr;
        combiner_HashJoin_15_ptr.reset(new CombinerType_HashJoin_15(combiner_HashJoin_14, extractor_1, UID_HashJoin_15, 1));

        CombinerType_HashJoin_15 * combiner_HashJoin_15 = combiner_HashJoin_15_ptr.get();
        ULONG combiner_HashJoin_15_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<HashJoin_15_Data0>> delegate_combiner_HashJoin_15_ptr (new OperatorDelegate<HashJoin_15_Data0>(OperatorDelegate<HashJoin_15_Data0>::FromOperator(combiner_HashJoin_15)));
        OperatorDelegate<HashJoin_15_Data0> * delegate_combiner_HashJoin_15 = delegate_combiner_HashJoin_15_ptr.get();
        ULONG delegate_combiner_HashJoin_15_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<HashJoin_15_Data0, Process_16_Data0> ProcessorType_Process_16;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_16> processor_Process_16_ptr (new ProcessorType_Process_16(ScopeProcessorManagedFactory::MakeSqlIp<HashJoin_15_Data0,Process_16_Data0,UID_Process_16>(delegate_combiner_HashJoin_15), delegate_combiner_HashJoin_15, UID_Process_16));
        ProcessorType_Process_16 * processor_Process_16 = processor_Process_16_ptr.get();
        ULONG processor_Process_16_count = 1;
        // Define hash aggregator type
        typedef LocalHashAggregatorV2<ProcessorType_Process_16, Process_16_Data0, Process_16_Data0, UID_Process_17> LocalHashAggregatorType_Process_17;
        // Construct operator and initialize it.
        unique_ptr<LocalHashAggregatorType_Process_17> localHashAggregator_Process_17_ptr (new LocalHashAggregatorType_Process_17(processor_Process_16, UID_Process_17));
        LocalHashAggregatorType_Process_17 * localHashAggregator_Process_17 = localHashAggregator_Process_17_ptr.get();
        ULONG localHashAggregator_Process_17_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_16_Data0>> delegate_localHashAggregator_Process_17_ptr (new OperatorDelegate<Process_16_Data0>(OperatorDelegate<Process_16_Data0>::FromOperator(localHashAggregator_Process_17)));
        OperatorDelegate<Process_16_Data0> * delegate_localHashAggregator_Process_17 = delegate_localHashAggregator_Process_17_ptr.get();
        ULONG delegate_localHashAggregator_Process_17_count = 1;
        // Define sorter type
        typedef Sorter<Process_16_Data0> SorterType_Process_18;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_18> sorter_Process_18_ptr (new SorterType_Process_18(delegate_localHashAggregator_Process_17, &StdSort<Process_16_Data0>::Sort<KeyComparePolicy<Process_16_Data0, UID_Process_18>, (sizeof(Process_16_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<Process_16_Data0>::CreateDelegate<UID_Process_18>(), false, 656408575 /*memoryQuota*/, UID_Process_18));
        SorterType_Process_18 * sorter_Process_18 = sorter_Process_18_ptr.get();
        ULONG sorter_Process_18_count = 1;
        // Define stream aggregator type
        typedef StreamAggregator<SorterType_Process_18, Process_16_Data0, Process_16_Data0, UID_Process_19> StreamAggregatorType_Process_19;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_19> streamAggregator_Process_19_ptr (new StreamAggregatorType_Process_19(sorter_Process_18, false, UID_Process_19));
        StreamAggregatorType_Process_19 * streamAggregator_Process_19 = streamAggregator_Process_19_ptr.get();
        ULONG streamAggregator_Process_19_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_16_Data0>> delegate_streamAggregator_Process_19_ptr (new OperatorDelegate<Process_16_Data0>(OperatorDelegate<Process_16_Data0>::FromOperator(streamAggregator_Process_19)));
        OperatorDelegate<Process_16_Data0> * delegate_streamAggregator_Process_19 = delegate_streamAggregator_Process_19_ptr.get();
        ULONG delegate_streamAggregator_Process_19_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Process_16_Data0, SV5_Combine_out0> ProcessorType_Process_20;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_20> processor_Process_20_ptr (new ProcessorType_Process_20(ScopeProcessorManagedFactory::MakeSqlIp<Process_16_Data0,SV5_Combine_out0,UID_Process_20>(delegate_streamAggregator_Process_19), delegate_streamAggregator_Process_19, UID_Process_20));
        ProcessorType_Process_20 * processor_Process_20 = processor_Process_20_ptr.get();
        ULONG processor_Process_20_count = 1;
        // Define outputer type
        typedef Outputer<ProcessorType_Process_20, SV5_Combine_out0, BinaryOutputPolicy<SV5_Combine_out0>, BinaryOutputStream, false> OutputerType4_SV5_Combine;
        // Construct operator and initialize it
        unique_ptr<OutputerType4_SV5_Combine> outputer_SV5_Combine_out0_ptr(new OutputerType4_SV5_Combine(processor_Process_20, outputFileNames[0], x_outputBufSize, x_outputBufCnt, UID_SV5_Combine_out0));
        OutputerType4_SV5_Combine * outputer_SV5_Combine_out0 = outputer_SV5_Combine_out0_ptr.get();

        try
        {
            // Init operator chain
            outputer_SV5_Combine_out0->Init();
    
            // Execute the whole vertex by calling the GetNextRow on top operator
            SV5_Combine_out0 row;
            outputer_SV5_Combine_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV5_Combine_out0->Close();
        }
        catch(ExceptionWithStack & ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(ex.GetErrorDetails());
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV5_Combine_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<HashJoin_15_Data0, Process_16_Data0> * ScopeEngine::ScopeProcessorManagedFactory::MakeSqlIp<HashJoin_15_Data0, Process_16_Data0, UID_Process_16>(OperatorDelegate<HashJoin_15_Data0>*);
template ScopeProcessorManaged<Process_16_Data0, SV5_Combine_out0> * ScopeEngine::ScopeProcessorManagedFactory::MakeSqlIp<Process_16_Data0, SV5_Combine_out0, UID_Process_20>(OperatorDelegate<Process_16_Data0>*);
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV5_Combine
#pragma region SV6_Combine
#if defined(COMPILE_SV6_COMBINE) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_21 [] =
    {
        "MovieID",
        "UserID",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename SV1_Extract_out0, typename Process_21_Data0, UID_Process_21>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_out0 & input, Process_21_Data0 & output, IncrementalAllocator * alloc)
        {
            InitializeStatics();
            int exceptionIndex = 0;
            try
            {
                output.m_MovieID = input.m_MovieID;
                exceptionIndex++;
                output.m_UserID = input.m_UserID;
                exceptionIndex++;

                return true;
            }
            catch(...)
            {
                std::string exceptionString = "Exception thrown while evaluating expression \"";
                exceptionString += StringTable_Process_21[exceptionIndex];
                exceptionString += "\"";
                cout << exceptionString.c_str() << endl;
                throw RuntimeExpressionException(StringTable_Process_21[exceptionIndex]);
            }
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_21_Data0,UID_HashJoin_22>
    {
    public:
        struct KeyStruct
        {
            int m_UserID;

            KeyStruct(Process_21_Data0 & c) :
                m_UserID(c.m_UserID)
            {
            }

            KeyStruct(const Process_21_Data0 & c, IncrementalAllocator * alloc) :
                m_UserID(const_cast<Process_21_Data0&>(c).m_UserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_UserID(c.m_UserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_UserID(const_cast<KeyStruct&>(c).m_UserID)
            {
            }

            KeyStruct() :
                m_UserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tUserID:\t" << row.m_UserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_21_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_UserID, key.m_UserID)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_21_Data0 * n1, Process_21_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_UserID, (*n2).m_UserID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Process_21_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_UserID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Process_21_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV4_Combine_out0,UID_HashJoin_22>
    {
    public:
        struct KeyStruct
        {
            int m_bUserID;

            KeyStruct(SV4_Combine_out0 & c) :
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const SV4_Combine_out0 & c, IncrementalAllocator * alloc) :
                m_bUserID(const_cast<SV4_Combine_out0&>(c).m_bUserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_bUserID(const_cast<KeyStruct&>(c).m_bUserID)
            {
            }

            KeyStruct() :
                m_bUserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tbUserID:\t" << row.m_bUserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV4_Combine_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_bUserID, key.m_bUserID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV4_Combine_out0 * n1, SV4_Combine_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_bUserID, (*n2).m_bUserID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV4_Combine_out0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_bUserID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV4_Combine_out0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_21_Data0,UID_HashJoin_22_0>
    {
    public:
        struct KeyStruct
        {
            int m_UserID;

            KeyStruct(Process_21_Data0 & c) :
                m_UserID(c.m_UserID)
            {
            }

            KeyStruct(const Process_21_Data0 & c, IncrementalAllocator * alloc) :
                m_UserID(const_cast<Process_21_Data0&>(c).m_UserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_UserID(c.m_UserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_UserID(const_cast<KeyStruct&>(c).m_UserID)
            {
            }

            KeyStruct() :
                m_UserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tUserID:\t" << row.m_UserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_21_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_UserID, key.m_UserID)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_21_Data0 * n1, Process_21_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_UserID, (*n2).m_UserID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV4_Combine_out0,UID_HashJoin_22_1>
    {
    public:
        struct KeyStruct
        {
            int m_bUserID;

            KeyStruct(SV4_Combine_out0 & c) :
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const SV4_Combine_out0 & c, IncrementalAllocator * alloc) :
                m_bUserID(const_cast<SV4_Combine_out0&>(c).m_bUserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_bUserID(const_cast<KeyStruct&>(c).m_bUserID)
            {
            }

            KeyStruct() :
                m_bUserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tbUserID:\t" << row.m_bUserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV4_Combine_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_bUserID, key.m_bUserID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV4_Combine_out0 * n1, SV4_Combine_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_bUserID, (*n2).m_bUserID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_HashJoin_22> 
    {
    public:
        typedef KeyComparePolicy<Process_21_Data0,UID_HashJoin_22_0> LeftKeyPolicy;
        typedef KeyComparePolicy<SV4_Combine_out0,UID_HashJoin_22_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const Process_21_Data0 * left, const SV4_Combine_out0 * right)
        {
            int r = 0;
            Process_21_Data0 * n1 = const_cast<Process_21_Data0 *>(left);
            SV4_Combine_out0 * n2 = const_cast<SV4_Combine_out0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_UserID, (*n2).m_bUserID)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(Process_21_Data0 * left, SV4_Combine_out0 * right, HashJoin_22_Data0 * out)
        {
                (*out).m_MovieID = (*left).m_MovieID;
                (*out).m_aUserID = (*right).m_aUserID;
                (*out).m_bUserID = (*right).m_bUserID;
        }

        static void CopyLeftRow(Process_21_Data0 * left, HashJoin_22_Data0 * out)
        {
            (*out).m_MovieID = (*left).m_MovieID;
        }

        static void NullifyRightSide(HashJoin_22_Data0 * out)
        {
        }

        static void CopyRightRow(SV4_Combine_out0 * right, HashJoin_22_Data0 * out)
        {
            (*out).m_aUserID = (*right).m_aUserID;
            (*out).m_bUserID = (*right).m_bUserID;
        }

        static void NullifyLeftSide(HashJoin_22_Data0 * out)
        {
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<Process_21_Data0, SV4_Combine_out0, HashJoin_22_Data0, UID_HashJoin_22>
    {
    public:
        typedef StdSort<Process_21_Data0> ProbeSorterAlgorithm;
        typedef StdSort<SV4_Combine_out0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<Process_21_Data0, SV4_Combine_out0, HashJoin_22_Data0, UID_HashJoin_22>
    {
    public:
        typedef HashCombinerPolicyV2<Process_21_Data0, SV4_Combine_out0, HashJoin_22_Data0, UID_HashJoin_22> P;

        typedef HashCombineKey_HashJoin_22 KeySchema;
        typedef HashCombineValue_HashJoin_14 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_22& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_UserID_bUserID);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV4_Combine_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_bUserID);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const Process_21_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_UserID);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_22& left, const HashCombineKey_HashJoin_22& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_UserID_bUserID, right.m_UserID_bUserID)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const Process_21_Data0& left, const HashCombineKey_HashJoin_22& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_UserID, right.m_UserID_bUserID)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 2942304254ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef GranularList<ValueSchema*, s_valueListSegmentSizeExponent, CharAllocator> UnderlyingValue;
        typedef UnderlyingValue Value;
        typedef Value::Iterator ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashMap<KeySchema, Value, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::MANY;

        static void UpdateValueList(CharAllocator& alloc, Value& valueList, ValueSchema* value)
        {
            valueList.EmplaceFront(alloc, value);
        }

        static ValueIterator ValueListBegin(Value& valueList)
        {
            return valueList.Begin();
        }
        
        static ValueIterator ValueListEnd(Value& valueList)
        {
            return valueList.End();
        }
        
        static size_t ValueListSize(const Value& valueList)
        {
            return valueList.Size();
        }

        static size_t IncrementValueListStats(Value& valueList)
        {
            return 0;
        }

    
        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const Process_21_Data0 & probe, const ValueSchema * build, HashJoin_22_Data0 & output)
        {
            // copy probe
            output.m_MovieID = probe.m_MovieID;

            // copy build
            output.m_bUserID = scope_cast<int>(probe.m_UserID);
            output.m_aUserID = (*build).m_aUserID;
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const Process_21_Data0 & probe, HashJoin_22_Data0 & output)
        {
            // copy probe
            output.m_MovieID = probe.m_MovieID;

            // nullify build
        }

         static void DeepCopyBuildRowToKeyValue(const SV4_Combine_out0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
           key.m_UserID_bUserID = row.m_bUserID;
            // copy value
            (*value).m_aUserID = row.m_aUserID;
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, SV4_Combine_out0 & row)
         {
            // copy key
           row.m_bUserID = key.m_UserID_bUserID;
            // copy value
            row.m_aUserID = (*value).m_aUserID;
         }

        static void InsertOrUpdate(Hashtable& ht, const SV4_Combine_out0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            ValueSchema* value = new (alloc.Allocate(sizeof(ValueSchema))) ValueSchema();
            DeepCopyBuildRowToKeyValue(row, key, value, &alloc);

            Value vlist;
            auto it = ht.InsertWithPrecomputedHash(hash, { key, vlist });
            UpdateValueList(calloc, it.first->second, value);
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_23 [] =
    {
        "MovieID",
        "UserID",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename SV1_Extract_out0, typename Process_23_Data0, UID_Process_23>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_out0 & input, Process_23_Data0 & output, IncrementalAllocator * alloc)
        {
            InitializeStatics();
            int exceptionIndex = 0;
            try
            {
                output.m_MovieID1 = input.m_MovieID;
                exceptionIndex++;
                output.m_UserID2 = input.m_UserID;
                exceptionIndex++;

                return true;
            }
            catch(...)
            {
                std::string exceptionString = "Exception thrown while evaluating expression \"";
                exceptionString += StringTable_Process_23[exceptionIndex];
                exceptionString += "\"";
                cout << exceptionString.c_str() << endl;
                throw RuntimeExpressionException(StringTable_Process_23[exceptionIndex]);
            }
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<HashJoin_22_Data0,UID_HashJoin_24>
    {
    public:
        struct KeyStruct
        {
            int m_aUserID;
            int m_MovieID;

            KeyStruct(HashJoin_22_Data0 & c) :
                m_aUserID(c.m_aUserID),
                m_MovieID(c.m_MovieID)
            {
            }

            KeyStruct(const HashJoin_22_Data0 & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<HashJoin_22_Data0&>(c).m_aUserID),
                m_MovieID(const_cast<HashJoin_22_Data0&>(c).m_MovieID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_aUserID(c.m_aUserID),
                m_MovieID(c.m_MovieID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<KeyStruct&>(c).m_aUserID),
                m_MovieID(const_cast<KeyStruct&>(c).m_MovieID)
            {
            }

            KeyStruct() :
                m_aUserID(0),
                m_MovieID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\taUserID:\t" << row.m_aUserID << endl;
                os << "\tMovieID:\t" << row.m_MovieID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(HashJoin_22_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_aUserID, key.m_aUserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_MovieID, key.m_MovieID)) != 0)
                return r;
            return r;
        }

        static int Compare(HashJoin_22_Data0 * n1, HashJoin_22_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_aUserID, (*n2).m_aUserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_MovieID, (*n2).m_MovieID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(HashJoin_22_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_aUserID);
            }

            --depth;
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_MovieID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(HashJoin_22_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_23_Data0,UID_HashJoin_24>
    {
    public:
        struct KeyStruct
        {
            int m_UserID2;
            int m_MovieID1;

            KeyStruct(Process_23_Data0 & c) :
                m_UserID2(c.m_UserID2),
                m_MovieID1(c.m_MovieID1)
            {
            }

            KeyStruct(const Process_23_Data0 & c, IncrementalAllocator * alloc) :
                m_UserID2(const_cast<Process_23_Data0&>(c).m_UserID2),
                m_MovieID1(const_cast<Process_23_Data0&>(c).m_MovieID1)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_UserID2(c.m_UserID2),
                m_MovieID1(c.m_MovieID1)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_UserID2(const_cast<KeyStruct&>(c).m_UserID2),
                m_MovieID1(const_cast<KeyStruct&>(c).m_MovieID1)
            {
            }

            KeyStruct() :
                m_UserID2(0),
                m_MovieID1(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tUserID2:\t" << row.m_UserID2 << endl;
                os << "\tMovieID1:\t" << row.m_MovieID1 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_23_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_UserID2, key.m_UserID2)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_MovieID1, key.m_MovieID1)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_23_Data0 * n1, Process_23_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_UserID2, (*n2).m_UserID2)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_MovieID1, (*n2).m_MovieID1)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Process_23_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_UserID2);
            }

            --depth;
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_MovieID1);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Process_23_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<HashJoin_22_Data0,UID_HashJoin_24_0>
    {
    public:
        struct KeyStruct
        {
            int m_aUserID;
            int m_MovieID;

            KeyStruct(HashJoin_22_Data0 & c) :
                m_aUserID(c.m_aUserID),
                m_MovieID(c.m_MovieID)
            {
            }

            KeyStruct(const HashJoin_22_Data0 & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<HashJoin_22_Data0&>(c).m_aUserID),
                m_MovieID(const_cast<HashJoin_22_Data0&>(c).m_MovieID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_aUserID(c.m_aUserID),
                m_MovieID(c.m_MovieID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<KeyStruct&>(c).m_aUserID),
                m_MovieID(const_cast<KeyStruct&>(c).m_MovieID)
            {
            }

            KeyStruct() :
                m_aUserID(0),
                m_MovieID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\taUserID:\t" << row.m_aUserID << endl;
                os << "\tMovieID:\t" << row.m_MovieID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(HashJoin_22_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_aUserID, key.m_aUserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_MovieID, key.m_MovieID)) != 0)
                return r;
            return r;
        }

        static int Compare(HashJoin_22_Data0 * n1, HashJoin_22_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_aUserID, (*n2).m_aUserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_MovieID, (*n2).m_MovieID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_23_Data0,UID_HashJoin_24_1>
    {
    public:
        struct KeyStruct
        {
            int m_UserID2;
            int m_MovieID1;

            KeyStruct(Process_23_Data0 & c) :
                m_UserID2(c.m_UserID2),
                m_MovieID1(c.m_MovieID1)
            {
            }

            KeyStruct(const Process_23_Data0 & c, IncrementalAllocator * alloc) :
                m_UserID2(const_cast<Process_23_Data0&>(c).m_UserID2),
                m_MovieID1(const_cast<Process_23_Data0&>(c).m_MovieID1)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_UserID2(c.m_UserID2),
                m_MovieID1(c.m_MovieID1)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_UserID2(const_cast<KeyStruct&>(c).m_UserID2),
                m_MovieID1(const_cast<KeyStruct&>(c).m_MovieID1)
            {
            }

            KeyStruct() :
                m_UserID2(0),
                m_MovieID1(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tUserID2:\t" << row.m_UserID2 << endl;
                os << "\tMovieID1:\t" << row.m_MovieID1 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_23_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_UserID2, key.m_UserID2)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_MovieID1, key.m_MovieID1)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_23_Data0 * n1, Process_23_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_UserID2, (*n2).m_UserID2)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_MovieID1, (*n2).m_MovieID1)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_HashJoin_24> 
    {
    public:
        typedef KeyComparePolicy<HashJoin_22_Data0,UID_HashJoin_24_0> LeftKeyPolicy;
        typedef KeyComparePolicy<Process_23_Data0,UID_HashJoin_24_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const HashJoin_22_Data0 * left, const Process_23_Data0 * right)
        {
            int r = 0;
            HashJoin_22_Data0 * n1 = const_cast<HashJoin_22_Data0 *>(left);
            Process_23_Data0 * n2 = const_cast<Process_23_Data0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_aUserID, (*n2).m_UserID2)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_MovieID, (*n2).m_MovieID1)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(HashJoin_22_Data0 * left, Process_23_Data0 * right, HashJoin_22_Data0 * out)
        {
                (*out).m_aUserID = (*left).m_aUserID;
                (*out).m_bUserID = (*left).m_bUserID;
                (*out).m_MovieID = (*left).m_MovieID;
        }

        static void CopyLeftRow(HashJoin_22_Data0 * left, HashJoin_22_Data0 * out)
        {
            (*out).m_aUserID = (*left).m_aUserID;
            (*out).m_bUserID = (*left).m_bUserID;
            (*out).m_MovieID = (*left).m_MovieID;
        }

        static void NullifyRightSide(HashJoin_22_Data0 * out)
        {
        }

        static void CopyRightRow(Process_23_Data0 * right, HashJoin_22_Data0 * out)
        {
        }

        static void NullifyLeftSide(HashJoin_22_Data0 * out)
        {
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<HashJoin_22_Data0, Process_23_Data0, HashJoin_22_Data0, UID_HashJoin_24>
    {
    public:
        typedef StdSort<HashJoin_22_Data0> ProbeSorterAlgorithm;
        typedef StdSort<Process_23_Data0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<HashJoin_22_Data0, Process_23_Data0, HashJoin_22_Data0, UID_HashJoin_24>
    {
    public:
        typedef HashCombinerPolicyV2<HashJoin_22_Data0, Process_23_Data0, HashJoin_22_Data0, UID_HashJoin_24> P;

        typedef HashCombineKey_HashJoin_24 KeySchema;
        typedef HashCombineValue_HashJoin_24 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_24& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_aUserID_UserID2);
                    result += ScopeHash(schema.m_MovieID_MovieID1);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const Process_23_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_UserID2);
                    result += ScopeHash(schema.m_MovieID1);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashJoin_22_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_aUserID);
                    result += ScopeHash(schema.m_MovieID);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_24& left, const HashCombineKey_HashJoin_24& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_aUserID_UserID2, right.m_aUserID_UserID2)) return false;
                if (!ScopeTypeCompare_EqualEqual(left.m_MovieID_MovieID1, right.m_MovieID_MovieID1)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const HashJoin_22_Data0& left, const HashCombineKey_HashJoin_24& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_aUserID, right.m_aUserID_UserID2)) return false;
                if (!ScopeTypeCompare_EqualEqual(left.m_MovieID, right.m_MovieID_MovieID1)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 2942304254ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef void** Value;
        typedef void** ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashSet<KeySchema, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::ZERO;

        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const HashJoin_22_Data0 & probe, const ValueSchema * build, HashJoin_22_Data0 & output)
        {
            // copy probe
            output.m_aUserID = probe.m_aUserID;
            output.m_bUserID = probe.m_bUserID;
            output.m_MovieID = probe.m_MovieID;

            // copy build
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const HashJoin_22_Data0 & probe, HashJoin_22_Data0 & output)
        {
            // copy probe
            output.m_aUserID = probe.m_aUserID;
            output.m_bUserID = probe.m_bUserID;
            output.m_MovieID = probe.m_MovieID;

            // nullify build
        }

         static void DeepCopyBuildRowToKeyValue(const Process_23_Data0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
           key.m_aUserID_UserID2 = row.m_UserID2;
           key.m_MovieID_MovieID1 = row.m_MovieID1;
            // copy value
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, Process_23_Data0 & row)
         {
            // copy key
           row.m_UserID2 = key.m_aUserID_UserID2;
           row.m_MovieID1 = key.m_MovieID_MovieID1;
            // copy value
         }

        static void InsertOrUpdate(Hashtable& ht, const Process_23_Data0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            DeepCopyBuildRowToKeyValue(row, key, nullptr, &alloc);
            ht.InsertWithPrecomputedHash(hash, key);
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_25 [] =
    {
        "MovieID",
        "aUserID",
        "bUserID",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename HashJoin_22_Data0, typename SV6_Combine_out0, UID_Process_25>
    {
    public:

        static bool FilterTransformRow(HashJoin_22_Data0 & input, SV6_Combine_out0 & output, IncrementalAllocator * alloc)
        {
            InitializeStatics();
            int exceptionIndex = 0;
            try
            {
                output.m_UnseenMovieID = input.m_MovieID;
                exceptionIndex++;
                output.m_aUserID2 = input.m_aUserID;
                exceptionIndex++;
                output.m_bUserID3 = input.m_bUserID;
                exceptionIndex++;

                return true;
            }
            catch(...)
            {
                std::string exceptionString = "Exception thrown while evaluating expression \"";
                exceptionString += StringTable_Process_25[exceptionIndex];
                exceptionString += "\"";
                cout << exceptionString.c_str() << endl;
                throw RuntimeExpressionException(StringTable_Process_25[exceptionIndex]);
            }
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV6_Combine_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, std::string * outputFileNames, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = true;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_out0, BinaryExtractPolicy<SV1_Extract_out0>, BinaryInputStream> ExtractorType1_SV6_Combine;
        unique_ptr<ExtractorType1_SV6_Combine> extractor_0_ptr= make_unique<ExtractorType1_SV6_Combine>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType1_SV6_Combine * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;

        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_out0, BinaryExtractPolicy<SV1_Extract_out0>, BinaryInputStream> ExtractorType2_SV6_Combine;
        unique_ptr<ExtractorType2_SV6_Combine> extractor_1_ptr= make_unique<ExtractorType2_SV6_Combine>(inputs[1], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType2_SV6_Combine * extractor_1 = extractor_1_ptr.get();
        ULONG extractor_1_count = 1;

        // Define extractor type and construct object
        typedef Extractor<SV4_Combine_out0, BinaryExtractPolicy<SV4_Combine_out0>, BinaryInputStream> ExtractorType3_SV6_Combine;
        unique_ptr<ExtractorType3_SV6_Combine> extractor_2_ptr= make_unique<ExtractorType3_SV6_Combine>(inputs[2], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV4_Combine_out0);
        ExtractorType3_SV6_Combine * extractor_2 = extractor_2_ptr.get();
        ULONG extractor_2_count = 1;

        // Define the type of the operator
        typedef FilterTransformer<ExtractorType1_SV6_Combine, SV1_Extract_out0, Process_21_Data0, UID_Process_21> FilterTransformerType_Process_21;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_21> filterTransformer_Process_21_ptr (new FilterTransformerType_Process_21(extractor_0, UID_Process_21));
        FilterTransformerType_Process_21 * filterTransformer_Process_21 = filterTransformer_Process_21_ptr.get();
        ULONG filterTransformer_Process_21_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<FilterTransformerType_Process_21, Process_21_Data0, ExtractorType3_SV6_Combine, SV4_Combine_out0, HashJoin_22_Data0, HashInnerJoinerV2, InnerJoiner, UID_HashJoin_22> CombinerType_HashJoin_22;
        unique_ptr<CombinerType_HashJoin_22> combiner_HashJoin_22_ptr;
        combiner_HashJoin_22_ptr.reset(new CombinerType_HashJoin_22(filterTransformer_Process_21, extractor_2, UID_HashJoin_22, 1));

        CombinerType_HashJoin_22 * combiner_HashJoin_22 = combiner_HashJoin_22_ptr.get();
        ULONG combiner_HashJoin_22_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<ExtractorType2_SV6_Combine, SV1_Extract_out0, Process_23_Data0, UID_Process_23> FilterTransformerType_Process_23;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_23> filterTransformer_Process_23_ptr (new FilterTransformerType_Process_23(extractor_1, UID_Process_23));
        FilterTransformerType_Process_23 * filterTransformer_Process_23 = filterTransformer_Process_23_ptr.get();
        ULONG filterTransformer_Process_23_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<CombinerType_HashJoin_22, HashJoin_22_Data0, FilterTransformerType_Process_23, Process_23_Data0, HashJoin_22_Data0, HashLeftAntiSemiJoinerV2, LeftAntiSemiJoiner, UID_HashJoin_24> CombinerType_HashJoin_24;
        unique_ptr<CombinerType_HashJoin_24> combiner_HashJoin_24_ptr;
        combiner_HashJoin_24_ptr.reset(new CombinerType_HashJoin_24(combiner_HashJoin_22, filterTransformer_Process_23, UID_HashJoin_24, 0));

        CombinerType_HashJoin_24 * combiner_HashJoin_24 = combiner_HashJoin_24_ptr.get();
        ULONG combiner_HashJoin_24_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<CombinerType_HashJoin_24, HashJoin_22_Data0, SV6_Combine_out0, UID_Process_25> FilterTransformerType_Process_25;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_25> filterTransformer_Process_25_ptr (new FilterTransformerType_Process_25(combiner_HashJoin_24, UID_Process_25));
        FilterTransformerType_Process_25 * filterTransformer_Process_25 = filterTransformer_Process_25_ptr.get();
        ULONG filterTransformer_Process_25_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_25, SV6_Combine_out0, BinaryOutputPolicy<SV6_Combine_out0>, BinaryOutputStream, false> OutputerType4_SV6_Combine;
        // Construct operator and initialize it
        unique_ptr<OutputerType4_SV6_Combine> outputer_SV6_Combine_out0_ptr(new OutputerType4_SV6_Combine(filterTransformer_Process_25, outputFileNames[0], x_outputBufSize, x_outputBufCnt, UID_SV6_Combine_out0));
        OutputerType4_SV6_Combine * outputer_SV6_Combine_out0 = outputer_SV6_Combine_out0_ptr.get();

        try
        {
            // Init operator chain
            outputer_SV6_Combine_out0->Init();
    
            // Execute the whole vertex by calling the GetNextRow on top operator
            SV6_Combine_out0 row;
            outputer_SV6_Combine_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV6_Combine_out0->Close();
        }
        catch(ExceptionWithStack & ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(ex.GetErrorDetails());
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV6_Combine_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV6_Combine
#pragma region SV7_Combine
#if defined(COMPILE_SV7_COMBINE) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_29_Data0,UID_Process_32>
    {
    public:
        struct KeyStruct
        {
            int m_aUserID;

            KeyStruct(Process_29_Data0 & c) :
                m_aUserID(c.m_aUserID)
            {
            }

            KeyStruct(const Process_29_Data0 & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<Process_29_Data0&>(c).m_aUserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_aUserID(c.m_aUserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<KeyStruct&>(c).m_aUserID)
            {
            }

            KeyStruct() :
                m_aUserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\taUserID:\t" << row.m_aUserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_29_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_aUserID, key.m_aUserID)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_29_Data0 * n1, Process_29_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_aUserID, (*n2).m_aUserID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)
    template<> 
    class AggregationPolicy<typename Process_29_Data0, typename Process_29_Data0, UID_Process_32> 
    {
    public:
        
        AggregationPolicy()
            :
            m_aUserID_aUserID_FIRST("FIRST_aUserID_aUserID"),
            m_partialagg7___partialagg7___MAX("MAX_partialagg7___partialagg7__")
        {
        }
        
        // begin key range (copy grouping key to output)
        void BeginKey(KeyComparePolicy<Process_29_Data0,UID_Process_32>::KeyType * input, Process_29_Data0 * output)
        {
            (*output).m_aUserID = (*input).m_aUserID;
        }

        // process input row, called for each row in key range
        void AddRow(Process_29_Data0 * input)
        {
            m_aUserID_aUserID_FIRST.Add((*input).m_aUserID);
            m_partialagg7___partialagg7___MAX.Add((*input).m_partialagg7__);
        }

        // write aggregated data, called after key is completely scanned
        void Aggregate(Process_29_Data0 * output)
        {
            m_aUserID_aUserID_FIRST.Aggregate(&(*output).m_aUserID);
            m_partialagg7___partialagg7___MAX.Aggregate(&(*output).m_partialagg7__);
        }

        // write aggregated data
        void GetValue(Process_29_Data0 * output)
        {
            m_aUserID_aUserID_FIRST.GetValue(&(*output).m_aUserID);
            m_partialagg7___partialagg7___MAX.GetValue(&(*output).m_partialagg7__);
        }

        // reset for new key
        void Reset()
        {
            m_aUserID_aUserID_FIRST.Reset();
            m_partialagg7___partialagg7___MAX.Reset();
        }

        // store statistics
        void WriteRuntimeStats(TreeNode & root)
        {
            m_aUserID_aUserID_FIRST.WriteRuntimeStats(root);
            m_partialagg7___partialagg7___MAX.WriteRuntimeStats(root);
        }

        // get operator resource requirements
        OperatorRequirements GetOperatorRequirements()
        {
            OperatorRequirements result;
            result.Add(m_aUserID_aUserID_FIRST.GetOperatorRequirements());
            result.Add(m_partialagg7___partialagg7___MAX.GetOperatorRequirements());
            return result;
        }

    private:
        Aggregate_FIRST<int> m_aUserID_aUserID_FIRST;
        Aggregate_MAX<FString> m_partialagg7___partialagg7___MAX;
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_29_Data0,UID_Process_31>
    {
    public:
        struct KeyStruct
        {
            int m_aUserID;

            KeyStruct(Process_29_Data0 & c) :
                m_aUserID(c.m_aUserID)
            {
            }

            KeyStruct(const Process_29_Data0 & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<Process_29_Data0&>(c).m_aUserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_aUserID(c.m_aUserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<KeyStruct&>(c).m_aUserID)
            {
            }

            KeyStruct() :
                m_aUserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\taUserID:\t" << row.m_aUserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_29_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_aUserID, key.m_aUserID)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_29_Data0 * n1, Process_29_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_aUserID, (*n2).m_aUserID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Process_29_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_aUserID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Process_29_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_2 [] =
    {
        "MovieID",
        "UserID",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename SV1_Extract_out0, typename Process_21_Data0, UID_Process_2>
    {
    public:

        static bool FilterTransformRow(SV1_Extract_out0 & input, Process_21_Data0 & output, IncrementalAllocator * alloc)
        {
            InitializeStatics();
            int exceptionIndex = 0;
            try
            {
                output.m_MovieID = input.m_MovieID;
                exceptionIndex++;
                output.m_UserID = input.m_UserID;
                exceptionIndex++;

                return true;
            }
            catch(...)
            {
                std::string exceptionString = "Exception thrown while evaluating expression \"";
                exceptionString += StringTable_Process_2[exceptionIndex];
                exceptionString += "\"";
                cout << exceptionString.c_str() << endl;
                throw RuntimeExpressionException(StringTable_Process_2[exceptionIndex]);
            }
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV6_Combine_out0,UID_HashJoin_26>
    {
    public:
        struct KeyStruct
        {
            int m_aUserID2;
            int m_bUserID3;

            KeyStruct(SV6_Combine_out0 & c) :
                m_aUserID2(c.m_aUserID2),
                m_bUserID3(c.m_bUserID3)
            {
            }

            KeyStruct(const SV6_Combine_out0 & c, IncrementalAllocator * alloc) :
                m_aUserID2(const_cast<SV6_Combine_out0&>(c).m_aUserID2),
                m_bUserID3(const_cast<SV6_Combine_out0&>(c).m_bUserID3)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_aUserID2(c.m_aUserID2),
                m_bUserID3(c.m_bUserID3)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_aUserID2(const_cast<KeyStruct&>(c).m_aUserID2),
                m_bUserID3(const_cast<KeyStruct&>(c).m_bUserID3)
            {
            }

            KeyStruct() :
                m_aUserID2(0),
                m_bUserID3(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\taUserID2:\t" << row.m_aUserID2 << endl;
                os << "\tbUserID3:\t" << row.m_bUserID3 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV6_Combine_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_aUserID2, key.m_aUserID2)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_bUserID3, key.m_bUserID3)) != 0)
                return r;
            return r;
        }

        static int Compare(SV6_Combine_out0 * n1, SV6_Combine_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_aUserID2, (*n2).m_aUserID2)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_bUserID3, (*n2).m_bUserID3)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV6_Combine_out0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_aUserID2);
            }

            --depth;
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_bUserID3);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV6_Combine_out0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV5_Combine_out0,UID_HashJoin_26>
    {
    public:
        struct KeyStruct
        {
            int m_aUserID;
            int m_bUserID;

            KeyStruct(SV5_Combine_out0 & c) :
                m_aUserID(c.m_aUserID),
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const SV5_Combine_out0 & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<SV5_Combine_out0&>(c).m_aUserID),
                m_bUserID(const_cast<SV5_Combine_out0&>(c).m_bUserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_aUserID(c.m_aUserID),
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<KeyStruct&>(c).m_aUserID),
                m_bUserID(const_cast<KeyStruct&>(c).m_bUserID)
            {
            }

            KeyStruct() :
                m_aUserID(0),
                m_bUserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\taUserID:\t" << row.m_aUserID << endl;
                os << "\tbUserID:\t" << row.m_bUserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV5_Combine_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_aUserID, key.m_aUserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_bUserID, key.m_bUserID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV5_Combine_out0 * n1, SV5_Combine_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_aUserID, (*n2).m_aUserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_bUserID, (*n2).m_bUserID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV5_Combine_out0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_aUserID);
            }

            --depth;
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_bUserID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV5_Combine_out0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV6_Combine_out0,UID_HashJoin_26_0>
    {
    public:
        struct KeyStruct
        {
            int m_aUserID2;
            int m_bUserID3;

            KeyStruct(SV6_Combine_out0 & c) :
                m_aUserID2(c.m_aUserID2),
                m_bUserID3(c.m_bUserID3)
            {
            }

            KeyStruct(const SV6_Combine_out0 & c, IncrementalAllocator * alloc) :
                m_aUserID2(const_cast<SV6_Combine_out0&>(c).m_aUserID2),
                m_bUserID3(const_cast<SV6_Combine_out0&>(c).m_bUserID3)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_aUserID2(c.m_aUserID2),
                m_bUserID3(c.m_bUserID3)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_aUserID2(const_cast<KeyStruct&>(c).m_aUserID2),
                m_bUserID3(const_cast<KeyStruct&>(c).m_bUserID3)
            {
            }

            KeyStruct() :
                m_aUserID2(0),
                m_bUserID3(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\taUserID2:\t" << row.m_aUserID2 << endl;
                os << "\tbUserID3:\t" << row.m_bUserID3 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV6_Combine_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_aUserID2, key.m_aUserID2)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_bUserID3, key.m_bUserID3)) != 0)
                return r;
            return r;
        }

        static int Compare(SV6_Combine_out0 * n1, SV6_Combine_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_aUserID2, (*n2).m_aUserID2)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_bUserID3, (*n2).m_bUserID3)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV5_Combine_out0,UID_HashJoin_26_1>
    {
    public:
        struct KeyStruct
        {
            int m_aUserID;
            int m_bUserID;

            KeyStruct(SV5_Combine_out0 & c) :
                m_aUserID(c.m_aUserID),
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const SV5_Combine_out0 & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<SV5_Combine_out0&>(c).m_aUserID),
                m_bUserID(const_cast<SV5_Combine_out0&>(c).m_bUserID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_aUserID(c.m_aUserID),
                m_bUserID(c.m_bUserID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_aUserID(const_cast<KeyStruct&>(c).m_aUserID),
                m_bUserID(const_cast<KeyStruct&>(c).m_bUserID)
            {
            }

            KeyStruct() :
                m_aUserID(0),
                m_bUserID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\taUserID:\t" << row.m_aUserID << endl;
                os << "\tbUserID:\t" << row.m_bUserID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV5_Combine_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_aUserID, key.m_aUserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_bUserID, key.m_bUserID)) != 0)
                return r;
            return r;
        }

        static int Compare(SV5_Combine_out0 * n1, SV5_Combine_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_aUserID, (*n2).m_aUserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_bUserID, (*n2).m_bUserID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_HashJoin_26> 
    {
    public:
        typedef KeyComparePolicy<SV6_Combine_out0,UID_HashJoin_26_0> LeftKeyPolicy;
        typedef KeyComparePolicy<SV5_Combine_out0,UID_HashJoin_26_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const SV6_Combine_out0 * left, const SV5_Combine_out0 * right)
        {
            int r = 0;
            SV6_Combine_out0 * n1 = const_cast<SV6_Combine_out0 *>(left);
            SV5_Combine_out0 * n2 = const_cast<SV5_Combine_out0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_aUserID2, (*n2).m_aUserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_bUserID3, (*n2).m_bUserID)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(SV6_Combine_out0 * left, SV5_Combine_out0 * right, HashJoin_26_Data0 * out)
        {
                (*out).m_UnseenMovieID = (*left).m_UnseenMovieID;
                (*out).m_bUserID3 = (*left).m_bUserID3;
                (*out).m_aUserID = (*right).m_aUserID;
                (*out).m_Similarity = (*right).m_Similarity;
        }

        static void CopyLeftRow(SV6_Combine_out0 * left, HashJoin_26_Data0 * out)
        {
            (*out).m_UnseenMovieID = (*left).m_UnseenMovieID;
            (*out).m_bUserID3 = (*left).m_bUserID3;
        }

        static void NullifyRightSide(HashJoin_26_Data0 * out)
        {
        }

        static void CopyRightRow(SV5_Combine_out0 * right, HashJoin_26_Data0 * out)
        {
            (*out).m_aUserID = (*right).m_aUserID;
            (*out).m_Similarity = (*right).m_Similarity;
        }

        static void NullifyLeftSide(HashJoin_26_Data0 * out)
        {
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<SV6_Combine_out0, SV5_Combine_out0, HashJoin_26_Data0, UID_HashJoin_26>
    {
    public:
        typedef StdSort<SV6_Combine_out0> ProbeSorterAlgorithm;
        typedef StdSort<SV5_Combine_out0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<SV6_Combine_out0, SV5_Combine_out0, HashJoin_26_Data0, UID_HashJoin_26>
    {
    public:
        typedef HashCombinerPolicyV2<SV6_Combine_out0, SV5_Combine_out0, HashJoin_26_Data0, UID_HashJoin_26> P;

        typedef HashCombineKey_HashJoin_26 KeySchema;
        typedef HashCombineValue_HashJoin_26 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_26& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_aUserID2_aUserID);
                    result += ScopeHash(schema.m_bUserID3_bUserID);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV5_Combine_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_aUserID);
                    result += ScopeHash(schema.m_bUserID);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV6_Combine_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_aUserID2);
                    result += ScopeHash(schema.m_bUserID3);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_26& left, const HashCombineKey_HashJoin_26& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_aUserID2_aUserID, right.m_aUserID2_aUserID)) return false;
                if (!ScopeTypeCompare_EqualEqual(left.m_bUserID3_bUserID, right.m_bUserID3_bUserID)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const SV6_Combine_out0& left, const HashCombineKey_HashJoin_26& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_aUserID2, right.m_aUserID2_aUserID)) return false;
                if (!ScopeTypeCompare_EqualEqual(left.m_bUserID3, right.m_bUserID3_bUserID)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 1296878795ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef ValueSchema Value;
        typedef void** ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashMap<KeySchema, Value, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::ONE;

        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const SV6_Combine_out0 & probe, const ValueSchema * build, HashJoin_26_Data0 & output)
        {
            // copy probe
            output.m_UnseenMovieID = probe.m_UnseenMovieID;
            output.m_bUserID3 = probe.m_bUserID3;

            // copy build
            output.m_aUserID = scope_cast<int>(probe.m_aUserID2);
            output.m_Similarity = (*build).m_Similarity;
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const SV6_Combine_out0 & probe, HashJoin_26_Data0 & output)
        {
            // copy probe
            output.m_UnseenMovieID = probe.m_UnseenMovieID;
            output.m_bUserID3 = probe.m_bUserID3;

            // nullify build
        }

         static void DeepCopyBuildRowToKeyValue(const SV5_Combine_out0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
           key.m_aUserID2_aUserID = row.m_aUserID;
           key.m_bUserID3_bUserID = row.m_bUserID;
            // copy value
            (*value).m_Similarity = row.m_Similarity;
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, SV5_Combine_out0 & row)
         {
            // copy key
           row.m_aUserID = key.m_aUserID2_aUserID;
           row.m_bUserID = key.m_bUserID3_bUserID;
            // copy value
            row.m_Similarity = (*value).m_Similarity;
         }

        static void InsertOrUpdate(Hashtable& ht, const SV5_Combine_out0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            ValueSchema value;
            DeepCopyBuildRowToKeyValue(row, key, &value, &alloc);

            auto it = ht.InsertWithPrecomputedHash(hash, { key, value });
            SCOPE_ASSERT(it.second); // check uniqueness
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<HashJoin_26_Data0,UID_HashJoin_27>
    {
    public:
        struct KeyStruct
        {
            int m_UnseenMovieID;

            KeyStruct(HashJoin_26_Data0 & c) :
                m_UnseenMovieID(c.m_UnseenMovieID)
            {
            }

            KeyStruct(const HashJoin_26_Data0 & c, IncrementalAllocator * alloc) :
                m_UnseenMovieID(const_cast<HashJoin_26_Data0&>(c).m_UnseenMovieID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_UnseenMovieID(c.m_UnseenMovieID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_UnseenMovieID(const_cast<KeyStruct&>(c).m_UnseenMovieID)
            {
            }

            KeyStruct() :
                m_UnseenMovieID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tUnseenMovieID:\t" << row.m_UnseenMovieID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(HashJoin_26_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_UnseenMovieID, key.m_UnseenMovieID)) != 0)
                return r;
            return r;
        }

        static int Compare(HashJoin_26_Data0 * n1, HashJoin_26_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_UnseenMovieID, (*n2).m_UnseenMovieID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(HashJoin_26_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_UnseenMovieID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(HashJoin_26_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV2_Process_out0,UID_HashJoin_27>
    {
    public:
        struct KeyStruct
        {
            int m_MovieID1;

            KeyStruct(SV2_Process_out0 & c) :
                m_MovieID1(c.m_MovieID1)
            {
            }

            KeyStruct(const SV2_Process_out0 & c, IncrementalAllocator * alloc) :
                m_MovieID1(const_cast<SV2_Process_out0&>(c).m_MovieID1)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_MovieID1(c.m_MovieID1)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_MovieID1(const_cast<KeyStruct&>(c).m_MovieID1)
            {
            }

            KeyStruct() :
                m_MovieID1(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tMovieID1:\t" << row.m_MovieID1 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV2_Process_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_MovieID1, key.m_MovieID1)) != 0)
                return r;
            return r;
        }

        static int Compare(SV2_Process_out0 * n1, SV2_Process_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_MovieID1, (*n2).m_MovieID1)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(SV2_Process_out0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_MovieID1);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(SV2_Process_out0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<HashJoin_26_Data0,UID_HashJoin_27_0>
    {
    public:
        struct KeyStruct
        {
            int m_UnseenMovieID;

            KeyStruct(HashJoin_26_Data0 & c) :
                m_UnseenMovieID(c.m_UnseenMovieID)
            {
            }

            KeyStruct(const HashJoin_26_Data0 & c, IncrementalAllocator * alloc) :
                m_UnseenMovieID(const_cast<HashJoin_26_Data0&>(c).m_UnseenMovieID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_UnseenMovieID(c.m_UnseenMovieID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_UnseenMovieID(const_cast<KeyStruct&>(c).m_UnseenMovieID)
            {
            }

            KeyStruct() :
                m_UnseenMovieID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tUnseenMovieID:\t" << row.m_UnseenMovieID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(HashJoin_26_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_UnseenMovieID, key.m_UnseenMovieID)) != 0)
                return r;
            return r;
        }

        static int Compare(HashJoin_26_Data0 * n1, HashJoin_26_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_UnseenMovieID, (*n2).m_UnseenMovieID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<SV2_Process_out0,UID_HashJoin_27_1>
    {
    public:
        struct KeyStruct
        {
            int m_MovieID1;

            KeyStruct(SV2_Process_out0 & c) :
                m_MovieID1(c.m_MovieID1)
            {
            }

            KeyStruct(const SV2_Process_out0 & c, IncrementalAllocator * alloc) :
                m_MovieID1(const_cast<SV2_Process_out0&>(c).m_MovieID1)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_MovieID1(c.m_MovieID1)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_MovieID1(const_cast<KeyStruct&>(c).m_MovieID1)
            {
            }

            KeyStruct() :
                m_MovieID1(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tMovieID1:\t" << row.m_MovieID1 << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(SV2_Process_out0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_MovieID1, key.m_MovieID1)) != 0)
                return r;
            return r;
        }

        static int Compare(SV2_Process_out0 * n1, SV2_Process_out0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_MovieID1, (*n2).m_MovieID1)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_HashJoin_27> 
    {
    public:
        typedef KeyComparePolicy<HashJoin_26_Data0,UID_HashJoin_27_0> LeftKeyPolicy;
        typedef KeyComparePolicy<SV2_Process_out0,UID_HashJoin_27_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const HashJoin_26_Data0 * left, const SV2_Process_out0 * right)
        {
            int r = 0;
            HashJoin_26_Data0 * n1 = const_cast<HashJoin_26_Data0 *>(left);
            SV2_Process_out0 * n2 = const_cast<SV2_Process_out0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_UnseenMovieID, (*n2).m_MovieID1)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(HashJoin_26_Data0 * left, SV2_Process_out0 * right, HashJoin_27_Data0 * out)
        {
                (*out).m_aUserID = (*left).m_aUserID;
                (*out).m_Similarity = (*left).m_Similarity;
                (*out).m_UnseenMovieID = (*left).m_UnseenMovieID;
                (*out).m_bUserID3 = (*left).m_bUserID3;
                (*out).m_AvgRating = (*right).m_AvgRating;
                (*out).m_MovieID1 = (*right).m_MovieID1;
        }

        static void CopyLeftRow(HashJoin_26_Data0 * left, HashJoin_27_Data0 * out)
        {
            (*out).m_aUserID = (*left).m_aUserID;
            (*out).m_Similarity = (*left).m_Similarity;
            (*out).m_UnseenMovieID = (*left).m_UnseenMovieID;
            (*out).m_bUserID3 = (*left).m_bUserID3;
        }

        static void NullifyRightSide(HashJoin_27_Data0 * out)
        {
            (*out).m_AvgRating.SetNull();
        }

        static void CopyRightRow(SV2_Process_out0 * right, HashJoin_27_Data0 * out)
        {
            (*out).m_AvgRating = (*right).m_AvgRating;
            (*out).m_MovieID1 = (*right).m_MovieID1;
        }

        static void NullifyLeftSide(HashJoin_27_Data0 * out)
        {
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<HashJoin_26_Data0, SV2_Process_out0, HashJoin_27_Data0, UID_HashJoin_27>
    {
    public:
        typedef StdSort<HashJoin_26_Data0> ProbeSorterAlgorithm;
        typedef StdSort<SV2_Process_out0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<HashJoin_26_Data0, SV2_Process_out0, HashJoin_27_Data0, UID_HashJoin_27>
    {
    public:
        typedef HashCombinerPolicyV2<HashJoin_26_Data0, SV2_Process_out0, HashJoin_27_Data0, UID_HashJoin_27> P;

        typedef HashCombineKey_HashJoin_27 KeySchema;
        typedef HashCombineValue_HashJoin_27 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_27& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_UnseenMovieID_MovieID1);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const SV2_Process_out0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_MovieID1);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashJoin_26_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_UnseenMovieID);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_27& left, const HashCombineKey_HashJoin_27& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_UnseenMovieID_MovieID1, right.m_UnseenMovieID_MovieID1)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const HashJoin_26_Data0& left, const HashCombineKey_HashJoin_27& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_UnseenMovieID, right.m_UnseenMovieID_MovieID1)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 1296878795ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef ValueSchema Value;
        typedef void** ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashMap<KeySchema, Value, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::ONE;

        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const HashJoin_26_Data0 & probe, const ValueSchema * build, HashJoin_27_Data0 & output)
        {
            // copy probe
            output.m_aUserID = probe.m_aUserID;
            output.m_Similarity = probe.m_Similarity;
            output.m_UnseenMovieID = probe.m_UnseenMovieID;
            output.m_bUserID3 = probe.m_bUserID3;

            // copy build
            output.m_MovieID1 = scope_cast<int>(probe.m_UnseenMovieID);
            output.m_AvgRating = (*build).m_AvgRating;
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const HashJoin_26_Data0 & probe, HashJoin_27_Data0 & output)
        {
            // copy probe
            output.m_aUserID = probe.m_aUserID;
            output.m_Similarity = probe.m_Similarity;
            output.m_UnseenMovieID = probe.m_UnseenMovieID;
            output.m_bUserID3 = probe.m_bUserID3;

            // nullify build
            output.m_AvgRating.SetNull();
        }

         static void DeepCopyBuildRowToKeyValue(const SV2_Process_out0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
           key.m_UnseenMovieID_MovieID1 = row.m_MovieID1;
            // copy value
            (*value).m_AvgRating = row.m_AvgRating;
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, SV2_Process_out0 & row)
         {
            // copy key
           row.m_MovieID1 = key.m_UnseenMovieID_MovieID1;
            // copy value
            row.m_AvgRating = (*value).m_AvgRating;
         }

        static void InsertOrUpdate(Hashtable& ht, const SV2_Process_out0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            ValueSchema value;
            DeepCopyBuildRowToKeyValue(row, key, &value, &alloc);

            auto it = ht.InsertWithPrecomputedHash(hash, { key, value });
            SCOPE_ASSERT(it.second); // check uniqueness
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<HashJoin_27_Data0,UID_HashJoin_28>
    {
    public:
        struct KeyStruct
        {
            int m_bUserID3;
            int m_UnseenMovieID;

            KeyStruct(HashJoin_27_Data0 & c) :
                m_bUserID3(c.m_bUserID3),
                m_UnseenMovieID(c.m_UnseenMovieID)
            {
            }

            KeyStruct(const HashJoin_27_Data0 & c, IncrementalAllocator * alloc) :
                m_bUserID3(const_cast<HashJoin_27_Data0&>(c).m_bUserID3),
                m_UnseenMovieID(const_cast<HashJoin_27_Data0&>(c).m_UnseenMovieID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_bUserID3(c.m_bUserID3),
                m_UnseenMovieID(c.m_UnseenMovieID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_bUserID3(const_cast<KeyStruct&>(c).m_bUserID3),
                m_UnseenMovieID(const_cast<KeyStruct&>(c).m_UnseenMovieID)
            {
            }

            KeyStruct() :
                m_bUserID3(0),
                m_UnseenMovieID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tbUserID3:\t" << row.m_bUserID3 << endl;
                os << "\tUnseenMovieID:\t" << row.m_UnseenMovieID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(HashJoin_27_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_bUserID3, key.m_bUserID3)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_UnseenMovieID, key.m_UnseenMovieID)) != 0)
                return r;
            return r;
        }

        static int Compare(HashJoin_27_Data0 * n1, HashJoin_27_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_bUserID3, (*n2).m_bUserID3)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_UnseenMovieID, (*n2).m_UnseenMovieID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(HashJoin_27_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_bUserID3);
            }

            --depth;
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_UnseenMovieID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(HashJoin_27_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_21_Data0,UID_HashJoin_28>
    {
    public:
        struct KeyStruct
        {
            int m_UserID;
            int m_MovieID;

            KeyStruct(Process_21_Data0 & c) :
                m_UserID(c.m_UserID),
                m_MovieID(c.m_MovieID)
            {
            }

            KeyStruct(const Process_21_Data0 & c, IncrementalAllocator * alloc) :
                m_UserID(const_cast<Process_21_Data0&>(c).m_UserID),
                m_MovieID(const_cast<Process_21_Data0&>(c).m_MovieID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_UserID(c.m_UserID),
                m_MovieID(c.m_MovieID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_UserID(const_cast<KeyStruct&>(c).m_UserID),
                m_MovieID(const_cast<KeyStruct&>(c).m_MovieID)
            {
            }

            KeyStruct() :
                m_UserID(0),
                m_MovieID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tUserID:\t" << row.m_UserID << endl;
                os << "\tMovieID:\t" << row.m_MovieID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_21_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_UserID, key.m_UserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_MovieID, key.m_MovieID)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_21_Data0 * n1, Process_21_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_UserID, (*n2).m_UserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_MovieID, (*n2).m_MovieID)) != 0)
                return r;
            return r;
        }

        // Key function for MKQsort algorithm
        static __int64 Key(Process_21_Data0 * p, int depth)
        {
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_UserID);
            }

            --depth;
            if (depth < 1)
            {
                // We only support interger number as MKQsort key for now
                return (__int64)((*p).m_MovieID);
            }

            --depth;

            return 0;
        }

        // End of Key function for MKQSort algorithm
        static bool EofKey(Process_21_Data0 * p, int depth)
        {
            --depth;
            if (depth < 0)
                return false;
            --depth;
            if (depth < 0)
                return false;
            return true;
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<HashJoin_27_Data0,UID_HashJoin_28_0>
    {
    public:
        struct KeyStruct
        {
            int m_bUserID3;
            int m_UnseenMovieID;

            KeyStruct(HashJoin_27_Data0 & c) :
                m_bUserID3(c.m_bUserID3),
                m_UnseenMovieID(c.m_UnseenMovieID)
            {
            }

            KeyStruct(const HashJoin_27_Data0 & c, IncrementalAllocator * alloc) :
                m_bUserID3(const_cast<HashJoin_27_Data0&>(c).m_bUserID3),
                m_UnseenMovieID(const_cast<HashJoin_27_Data0&>(c).m_UnseenMovieID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_bUserID3(c.m_bUserID3),
                m_UnseenMovieID(c.m_UnseenMovieID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_bUserID3(const_cast<KeyStruct&>(c).m_bUserID3),
                m_UnseenMovieID(const_cast<KeyStruct&>(c).m_UnseenMovieID)
            {
            }

            KeyStruct() :
                m_bUserID3(0),
                m_UnseenMovieID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tbUserID3:\t" << row.m_bUserID3 << endl;
                os << "\tUnseenMovieID:\t" << row.m_UnseenMovieID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(HashJoin_27_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_bUserID3, key.m_bUserID3)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_UnseenMovieID, key.m_UnseenMovieID)) != 0)
                return r;
            return r;
        }

        static int Compare(HashJoin_27_Data0 * n1, HashJoin_27_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_bUserID3, (*n2).m_bUserID3)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_UnseenMovieID, (*n2).m_UnseenMovieID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<> 
    class KeyComparePolicy<Process_21_Data0,UID_HashJoin_28_1>
    {
    public:
        struct KeyStruct
        {
            int m_UserID;
            int m_MovieID;

            KeyStruct(Process_21_Data0 & c) :
                m_UserID(c.m_UserID),
                m_MovieID(c.m_MovieID)
            {
            }

            KeyStruct(const Process_21_Data0 & c, IncrementalAllocator * alloc) :
                m_UserID(const_cast<Process_21_Data0&>(c).m_UserID),
                m_MovieID(const_cast<Process_21_Data0&>(c).m_MovieID)
            {
            }

            KeyStruct(KeyStruct & c) :
                m_UserID(c.m_UserID),
                m_MovieID(c.m_MovieID)
            {
            }

            KeyStruct(const KeyStruct & c, IncrementalAllocator * alloc) :
                m_UserID(const_cast<KeyStruct&>(c).m_UserID),
                m_MovieID(const_cast<KeyStruct&>(c).m_MovieID)
            {
            }

            KeyStruct() :
                m_UserID(0),
                m_MovieID(0)
            {
            }
#if defined(SCOPE_DEBUG)
            friend ostream & operator<<(ostream & os, KeyStruct & row)
            {
                os << "\tUserID:\t" << row.m_UserID << endl;
                os << "\tMovieID:\t" << row.m_MovieID << endl;
              return os;
            }
#endif // defined(SCOPE_DEBUG)
        };

        typedef KeyStruct KeyType;

        static int Compare(Process_21_Data0 & row, KeyType & key)
        {
            int r = 0;
            if ((r = ScopeTypeCompare(row.m_UserID, key.m_UserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare(row.m_MovieID, key.m_MovieID)) != 0)
                return r;
            return r;
        }

        static int Compare(Process_21_Data0 * n1, Process_21_Data0 * n2)
        {
            int r = 0;
            if ((r = ScopeTypeCompare((*n1).m_UserID, (*n2).m_UserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_MovieID, (*n2).m_MovieID)) != 0)
                return r;
            return r;
        }

    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<> 
    class CombinerPolicy<UID_HashJoin_28> 
    {
    public:
        typedef KeyComparePolicy<HashJoin_27_Data0,UID_HashJoin_28_0> LeftKeyPolicy;
        typedef KeyComparePolicy<Process_21_Data0,UID_HashJoin_28_1> RightKeyPolicy;

        static const unsigned MaxPerKeyCrossSizeLimit = 0;

        static LONGLONG JoinerMemQuota()
        {
            return Configuration::GetGlobal().GetMaxInMemoryRowSize();
        }

        // compare key from left and right schema object
        static int Compare(const HashJoin_27_Data0 * left, const Process_21_Data0 * right)
        {
            int r = 0;
            HashJoin_27_Data0 * n1 = const_cast<HashJoin_27_Data0 *>(left);
            Process_21_Data0 * n2 = const_cast<Process_21_Data0 *>(right);

            if ((r = ScopeTypeCompare((*n1).m_bUserID3, (*n2).m_UserID)) != 0)
                return r;
            if ((r = ScopeTypeCompare((*n1).m_UnseenMovieID, (*n2).m_MovieID)) != 0)
                return r;
            
            // Everything matches
            return 0;
        }

        static void CopyRow(HashJoin_27_Data0 * left, Process_21_Data0 * right, HashJoin_28_Data0 * out)
        {
                (*out).m_aUserID = (*left).m_aUserID;
                (*out).m_Similarity = (*left).m_Similarity;
                (*out).m_AvgRating = (*left).m_AvgRating;
                (*out).m_MovieID1 = (*left).m_MovieID1;
        }

        static void CopyLeftRow(HashJoin_27_Data0 * left, HashJoin_28_Data0 * out)
        {
            (*out).m_aUserID = (*left).m_aUserID;
            (*out).m_Similarity = (*left).m_Similarity;
            (*out).m_AvgRating = (*left).m_AvgRating;
            (*out).m_MovieID1 = (*left).m_MovieID1;
        }

        static void NullifyRightSide(HashJoin_28_Data0 * out)
        {
        }

        static void CopyRightRow(Process_21_Data0 * right, HashJoin_28_Data0 * out)
        {
        }

        static void NullifyLeftSide(HashJoin_28_Data0 * out)
        {
            (*out).m_AvgRating.SetNull();
        }
    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_NATIVE)
    template<>
    class HashCombinerWithFallbackPolicy<HashJoin_27_Data0, Process_21_Data0, HashJoin_28_Data0, UID_HashJoin_28>
    {
    public:
        typedef StdSort<HashJoin_27_Data0> ProbeSorterAlgorithm;
        typedef StdSort<Process_21_Data0> BuildSorterAlgorithm;
    };

    template <>
    class HashCombinerPolicyV2<HashJoin_27_Data0, Process_21_Data0, HashJoin_28_Data0, UID_HashJoin_28>
    {
    public:
        typedef HashCombinerPolicyV2<HashJoin_27_Data0, Process_21_Data0, HashJoin_28_Data0, UID_HashJoin_28> P;

        typedef HashCombineKey_HashJoin_28 KeySchema;
        typedef HashCombineValue_HashJoin_24 ValueSchema;

        // >> define hash & equal functions
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0) {}
            Hash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashCombineKey_HashJoin_28& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_bUserID3_UserID);
                    result += ScopeHash(schema.m_UnseenMovieID_MovieID);
                
                return result;
            }
        };

        struct BuildHash
        {
            const INT64 m_seed;

            BuildHash() : m_seed((INT64)0) {}
            BuildHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const Process_21_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_UserID);
                    result += ScopeHash(schema.m_MovieID);
                
                return result;
            }
        };

        struct ProbeHash
        {
            const INT64 m_seed;

            ProbeHash() : m_seed((INT64)0) {}
            ProbeHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const HashJoin_27_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_bUserID3);
                    result += ScopeHash(schema.m_UnseenMovieID);
                
                return result;
            }
        };

        struct EqualTo
        {
            bool operator () (const HashCombineKey_HashJoin_28& left, const HashCombineKey_HashJoin_28& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_bUserID3_UserID, right.m_bUserID3_UserID)) return false;
                if (!ScopeTypeCompare_EqualEqual(left.m_UnseenMovieID_MovieID, right.m_UnseenMovieID_MovieID)) return false;
                return true;
            }
        };
        struct ProbeEqualTo
        {
            bool operator () (const HashJoin_27_Data0& left, const HashCombineKey_HashJoin_28& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_bUserID3, right.m_bUserID3_UserID)) return false;
                if (!ScopeTypeCompare_EqualEqual(left.m_UnseenMovieID, right.m_UnseenMovieID_MovieID)) return false;
                return true;
            }
        };
        static INT64* Seed()
        {
            static INT64 seed[] { 31607, 40529 };
            return seed;
        }

        static BuildHash* BuildHashes()
        {
            static BuildHash hashes[] { BuildHash(Seed()[0]), BuildHash(Seed()[1]) };
            return hashes;
        }

        static ProbeHash* ProbeHashes()
        {
            static ProbeHash hashes[] { ProbeHash(Seed()[0]), ProbeHash(Seed()[1]) };
            return hashes;
        }

        static const size_t s_seedCnt{ 2 };

        // << define hash & equal functions

        // >> define spilling
        struct Spilling
        {
            static const size_t s_bufferSize{ 4 * 1024 * 1024 }; //4MB
            static const size_t s_bufferCnt{ 2 };
        };
        // << define spilling

        // >> define constants
        static const size_t s_memoryQuota{ 1296878795ULL }; // Cosmos default is 2GB

        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // number of hashtables used in the join, the data is spilled  one hashtable at a time
        static const size_t s_hashtableCntExponent{ 2 }; // 4 hashtables

         // initial number of buckets per hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        // the length of the segment of the value list is defined as
        // 2^s_valueListSegmentSizeExponent => 1
        static const size_t s_valueListSegmentSizeExponent{ 0 };

        static const size_t s_maxPerKeyCrossSizeLimit{ 0 };
        // << define constants

        typedef STLIncrementalAllocator<char> CharAllocator;
        typedef GranularList<ValueSchema*, s_valueListSegmentSizeExponent, CharAllocator> UnderlyingValue;
        typedef UnderlyingValue Value;
        typedef Value::Iterator ValueIterator;

        template <typename Item, typename CharAllocator>
        struct HashtablePolicy : public SlimHashtableLayoutPolicy<Item, CharAllocator>::Type
        {
            struct BucketArrayTraits
            {
                static const size_t s_directorySize{ P::s_directorySize };
                static const size_t s_segmentSizeExponent{ P::s_segmentSizeExponent };
            };
        };

        typedef SlimHashMap<KeySchema, Value, HashtablePolicy, Hash, EqualTo> Hashtable;

        static const HashCombinerValuesPerKeyCountV2 s_valuesPerKeyCount = HashCombinerValuesPerKeyCountV2::MANY;

        static void UpdateValueList(CharAllocator& alloc, Value& valueList, ValueSchema* value)
        {
            valueList.EmplaceFront(alloc, value);
        }

        static ValueIterator ValueListBegin(Value& valueList)
        {
            return valueList.Begin();
        }
        
        static ValueIterator ValueListEnd(Value& valueList)
        {
            return valueList.End();
        }
        
        static size_t ValueListSize(const Value& valueList)
        {
            return valueList.Size();
        }

        static size_t IncrementValueListStats(Value& valueList)
        {
            return 0;
        }

    
        // Shallow copy probe and build schema fields to the output
        static void CopyBoth(const HashJoin_27_Data0 & probe, const ValueSchema * build, HashJoin_28_Data0 & output)
        {
            // copy probe
            output.m_aUserID = probe.m_aUserID;
            output.m_Similarity = probe.m_Similarity;
            output.m_AvgRating = probe.m_AvgRating;
            output.m_MovieID1 = probe.m_MovieID1;

            // copy build
        }

        // Shallow copy probe schema fields to the output and nullify all the rest
        static void CopyProbeAndNullifyBuild(const HashJoin_27_Data0 & probe, HashJoin_28_Data0 & output)
        {
            // copy probe
            output.m_aUserID = probe.m_aUserID;
            output.m_Similarity = probe.m_Similarity;
            output.m_AvgRating = probe.m_AvgRating;
            output.m_MovieID1 = probe.m_MovieID1;

            // nullify build
        }

         static void DeepCopyBuildRowToKeyValue(const Process_21_Data0 & row, KeySchema & key, ValueSchema * value, IncrementalAllocator* alloc)
         {
            // copy key
           key.m_bUserID3_UserID = row.m_UserID;
           key.m_UnseenMovieID_MovieID = row.m_MovieID;
            // copy value
         }

         static void CopyKeyValueToBuildRow(const KeySchema & key, const ValueSchema * value, Process_21_Data0 & row)
         {
            // copy key
           row.m_UserID = key.m_bUserID3_UserID;
           row.m_MovieID = key.m_UnseenMovieID_MovieID;
            // copy value
         }

        static void InsertOrUpdate(Hashtable& ht, const Process_21_Data0 & row, INT64 hash, IncrementalAllocator& alloc, CharAllocator& calloc)
        {
            KeySchema key;
            ValueSchema* value = new (alloc.Allocate(sizeof(ValueSchema))) ValueSchema();
            DeepCopyBuildRowToKeyValue(row, key, value, &alloc);

            Value vlist;
            auto it = ht.InsertWithPrecomputedHash(hash, { key, vlist });
            UpdateValueList(calloc, it.first->second, value);
        }
    };

#endif // defined(COMPILE_NATIVE)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename HashJoin_28_Data0, typename Process_29_Data0, UID_Process_29>
    {
    public:

        static bool FilterTransformRow(HashJoin_28_Data0 & input, Process_29_Data0 & output, IncrementalAllocator * alloc)
        {
           output.m_aUserID = input.m_aUserID;
            return true;
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_29>
    {
        typedef Microsoft::Analytics::Interfaces::IProcessor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_29());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(MakeBigString(L""))));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_29, "Constructor", ex);
                throw;
            }
        }

        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }

        cli::array<String^>^ ReadOnlyColumns()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<Process_29_Data0, UID_Process_29>
    {
    public:
        static void Marshal(Microsoft::Analytics::Interfaces::IRow^ managedRow, Process_29_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_partialagg7__, managedRow->Get<System::String^>(1), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Process_29_Data0, typename Process_29_Data0, UID_Process_30>
    {
    public:

        static bool FilterTransformRow(Process_29_Data0 & input, Process_29_Data0 & output, IncrementalAllocator * alloc)
        {
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

#if defined(COMPILE_NATIVE)

    template<>
    struct HashAggregationPolicyV2<Process_29_Data0, Process_29_Data0, UID_Process_30>
    {
        struct Hash
        {
            const INT64 m_seed;

            Hash() : m_seed((INT64)0)
            {
            }

            Hash(INT64 seed) : m_seed(seed)
            {
            }

            INT64 operator () (const HashCombineValue_HashJoin_14& schema) const
            {
                INT64 result = m_seed;
                result += ScopeHash(schema.m_aUserID);
                return result;
            }
        };
        struct EqualTo
        {
            bool operator () (const HashCombineValue_HashJoin_14& left, const HashCombineValue_HashJoin_14& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_aUserID, right.m_aUserID)) return false;
                return true;
            }
        };
        struct RowHash
        {
            const INT64 m_seed;

            RowHash() : m_seed((INT64)0) {}
            RowHash(INT64 seed) : m_seed(seed) {}

            INT64 operator () (const Process_29_Data0& schema) const
            {
                INT64 result = m_seed;
                    result += ScopeHash(schema.m_aUserID);
                
                return result;
            }
        };

        struct RowEqualTo
        {
            bool operator () (const Process_29_Data0& left, const HashCombineValue_HashJoin_14& right) const
            {
                if (!ScopeTypeCompare_EqualEqual(left.m_aUserID, right.m_aUserID)) return false;
                return true;
            }
        };
 
        typedef HashCombineValue_HashJoin_14 KeySchema;
        typedef HashAggregatorState_Process_30 ValueSchema;

        static const RowHash& RowHashF()
        {
            static RowHash hash;
            return hash;
        }
        
        static const RowEqualTo& RowPredF()
        {
            static RowEqualTo pred;
            return pred;
        }

        static const size_t s_memoryQuota{ 1296878795ULL }; // Cosmos default is 2GB
        
        // the maximum number of buckets in the hashtable is defined as 
        // s_directorySize * 2^s_segmentSizeExponent => 67 108 864
        // s_directorySize has to be a power of two
        static const size_t s_directorySize{ 4096 };
        static const size_t s_segmentSizeExponent{ 14 }; // 16384 bucket per segment

         // initial number of buckets in the hashtable
         // s_initialSize has to be a power of two
        static const size_t s_initialSize { 128 * (1 << s_segmentSizeExponent) };

        static       double MaxLoadFactor() { return 2.; }
        static const bool   s_valueSchemaHasDeepData{ true };

        // Shallow copy input schema fields to key schema
        static void ShallowCopyRowToKey(const Process_29_Data0 & row, KeySchema & key)
        {
           key.m_aUserID = row.m_aUserID;
        }

        static void DeepCopyRowToKey(const Process_29_Data0 & row, KeySchema & key, IncrementalAllocator* alloc)
        {
           key.m_aUserID = row.m_aUserID;
        }

        // Init value schema fields with default aggregate states, shallow copy
        static void ShallowCopyRowToValue(const Process_29_Data0 & row, ValueSchema & value)
        {
           Aggregate_MAX<FString>::Init(value.m_MAX_partialagg7__, row.m_partialagg7__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void DeepCopyRowToValue(const Process_29_Data0 & row, ValueSchema & value, IncrementalAllocator* alloc)
        {
           FString tmp_partialagg7__(row.m_partialagg7__, alloc);
           Aggregate_MAX<FString>::Init(value.m_MAX_partialagg7__, tmp_partialagg7__);
        }

        // Init value schema fields with default aggregate states, deep copy
        static void UpdateValue(ValueSchema & state, const Process_29_Data0 & update, IncrementalAllocator* alloc)
        {
                AggregateFixedArrayCopierShell<typename FString::ValueType> copier_partialagg7__(alloc);
                Aggregate_MAX<FString>::UpdateState(state.m_MAX_partialagg7__, update.m_partialagg7__, copier_partialagg7__);
        }


        // Shallow copy key and aggregated states to the output
        static void GetOutput(const KeySchema & key, const ValueSchema & value, Process_29_Data0 & row)
        {
            row.m_aUserID = key.m_aUserID;
            Aggregate_MAX<FString>::GetAggregatedValue(value.m_MAX_partialagg7__, &row.m_partialagg7__);
        }


    };
#endif // defined(COMPILE_NATIVE)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class RowTransformPolicy<typename Process_29_Data0, typename Process_29_Data0, UID_Process_32>
    {
    public:

        static bool FilterTransformRow(Process_29_Data0 & input, Process_29_Data0 & output, IncrementalAllocator * alloc)
        {
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements().AddMemoryInRows(1, 1);
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    static const char * StringTable_Process_33 [] =
    {
        "aUserID",
        "partialagg7__",
        "\"*** After Last Expression ***\"",
    };
    template<> 
    class RowTransformPolicy<typename Process_29_Data0, typename Process_33_Data0, UID_Process_33>
    {
    public:

        static bool FilterTransformRow(Process_29_Data0 & input, Process_33_Data0 & output, IncrementalAllocator * alloc)
        {
            InitializeStatics();
            int exceptionIndex = 0;
            try
            {
                output.m_aUserID = input.m_aUserID;
                exceptionIndex++;
                output.m_MaxString = input.m_partialagg7__;
                exceptionIndex++;

                return true;
            }
            catch(...)
            {
                std::string exceptionString = "Exception thrown while evaluating expression \"";
                exceptionString += StringTable_Process_33[exceptionIndex];
                exceptionString += "\"";
                cout << exceptionString.c_str() << endl;
                throw RuntimeExpressionException(StringTable_Process_33[exceptionIndex]);
            }
        }


        static void InitializeStatics()
        {
        }

        // get operator resource requirements
        static OperatorRequirements GetOperatorRequirements()
        {
            return OperatorRequirements();
        }
    };

    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_33_Data0, UID_SV7_Combine_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true>> * output, Process_33_Data0 & row)
        {
            output->Write(row.m_aUserID);
            output->WriteDelimiter();
            if (!row.m_MaxString.IsNull())
            {
                output->Write(row.m_MaxString);
            }
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV7_Combine_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, std::string * outputFileNames, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machjine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, false);

        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = false;
        // Define extractor type and construct object
        typedef Extractor<SV1_Extract_out0, BinaryExtractPolicy<SV1_Extract_out0>, BinaryInputStream> ExtractorType1_SV7_Combine;
        unique_ptr<ExtractorType1_SV7_Combine> extractor_0_ptr= make_unique<ExtractorType1_SV7_Combine>(inputs[0], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV1_Extract_out0);
        ExtractorType1_SV7_Combine * extractor_0 = extractor_0_ptr.get();
        ULONG extractor_0_count = 1;

        // Define extractor type and construct object
        typedef Extractor<SV2_Process_out0, BinaryExtractPolicy<SV2_Process_out0>, BinaryInputStream> ExtractorType2_SV7_Combine;
        unique_ptr<ExtractorType2_SV7_Combine> extractor_1_ptr= make_unique<ExtractorType2_SV7_Combine>(inputs[1], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV2_Process_out0);
        ExtractorType2_SV7_Combine * extractor_1 = extractor_1_ptr.get();
        ULONG extractor_1_count = 1;

        // Define extractor type and construct object
        typedef Extractor<SV6_Combine_out0, BinaryExtractPolicy<SV6_Combine_out0>, BinaryInputStream> ExtractorType3_SV7_Combine;
        unique_ptr<ExtractorType3_SV7_Combine> extractor_2_ptr= make_unique<ExtractorType3_SV7_Combine>(inputs[3], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV6_Combine_out0);
        ExtractorType3_SV7_Combine * extractor_2 = extractor_2_ptr.get();
        ULONG extractor_2_count = 1;

        // Define extractor type and construct object
        typedef Extractor<SV5_Combine_out0, BinaryExtractPolicy<SV5_Combine_out0>, BinaryInputStream> ExtractorType4_SV7_Combine;
        unique_ptr<ExtractorType4_SV7_Combine> extractor_3_ptr= make_unique<ExtractorType4_SV7_Combine>(inputs[2], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_SV5_Combine_out0);
        ExtractorType4_SV7_Combine * extractor_3 = extractor_3_ptr.get();
        ULONG extractor_3_count = 1;

        // Define the type of the operator
        typedef FilterTransformer<ExtractorType1_SV7_Combine, SV1_Extract_out0, Process_21_Data0, UID_Process_2> FilterTransformerType_Process_2;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_2> filterTransformer_Process_2_ptr (new FilterTransformerType_Process_2(extractor_0, UID_Process_2));
        FilterTransformerType_Process_2 * filterTransformer_Process_2 = filterTransformer_Process_2_ptr.get();
        ULONG filterTransformer_Process_2_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<ExtractorType3_SV7_Combine, SV6_Combine_out0, ExtractorType4_SV7_Combine, SV5_Combine_out0, HashJoin_26_Data0, HashInnerJoinerV2, InnerJoiner, UID_HashJoin_26> CombinerType_HashJoin_26;
        unique_ptr<CombinerType_HashJoin_26> combiner_HashJoin_26_ptr;
        combiner_HashJoin_26_ptr.reset(new CombinerType_HashJoin_26(extractor_2, extractor_3, UID_HashJoin_26, 1));

        CombinerType_HashJoin_26 * combiner_HashJoin_26 = combiner_HashJoin_26_ptr.get();
        ULONG combiner_HashJoin_26_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<CombinerType_HashJoin_26, HashJoin_26_Data0, ExtractorType2_SV7_Combine, SV2_Process_out0, HashJoin_27_Data0, HashInnerJoinerV2, InnerJoiner, UID_HashJoin_27> CombinerType_HashJoin_27;
        unique_ptr<CombinerType_HashJoin_27> combiner_HashJoin_27_ptr;
        combiner_HashJoin_27_ptr.reset(new CombinerType_HashJoin_27(combiner_HashJoin_26, extractor_1, UID_HashJoin_27, 1));

        CombinerType_HashJoin_27 * combiner_HashJoin_27 = combiner_HashJoin_27_ptr.get();
        ULONG combiner_HashJoin_27_count = 1;

        // Define the combiner operator
        typedef HashCombinerWithFallback<CombinerType_HashJoin_27, HashJoin_27_Data0, FilterTransformerType_Process_2, Process_21_Data0, HashJoin_28_Data0, HashInnerJoinerV2, InnerJoiner, UID_HashJoin_28> CombinerType_HashJoin_28;
        unique_ptr<CombinerType_HashJoin_28> combiner_HashJoin_28_ptr;
        combiner_HashJoin_28_ptr.reset(new CombinerType_HashJoin_28(combiner_HashJoin_27, filterTransformer_Process_2, UID_HashJoin_28, 1));

        CombinerType_HashJoin_28 * combiner_HashJoin_28 = combiner_HashJoin_28_ptr.get();
        ULONG combiner_HashJoin_28_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<HashJoin_28_Data0>> delegate_combiner_HashJoin_28_ptr (new OperatorDelegate<HashJoin_28_Data0>(OperatorDelegate<HashJoin_28_Data0>::FromOperator(combiner_HashJoin_28)));
        OperatorDelegate<HashJoin_28_Data0> * delegate_combiner_HashJoin_28 = delegate_combiner_HashJoin_28_ptr.get();
        ULONG delegate_combiner_HashJoin_28_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<HashJoin_28_Data0, Process_29_Data0> ProcessorType_Process_29;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_29> processor_Process_29_ptr (new ProcessorType_Process_29(ScopeProcessorManagedFactory::MakeSqlIp<HashJoin_28_Data0,Process_29_Data0,UID_Process_29>(delegate_combiner_HashJoin_28), delegate_combiner_HashJoin_28, UID_Process_29));
        ProcessorType_Process_29 * processor_Process_29 = processor_Process_29_ptr.get();
        ULONG processor_Process_29_count = 1;
        // Define hash aggregator type
        typedef LocalHashAggregatorV2<ProcessorType_Process_29, Process_29_Data0, Process_29_Data0, UID_Process_30> LocalHashAggregatorType_Process_30;
        // Construct operator and initialize it.
        unique_ptr<LocalHashAggregatorType_Process_30> localHashAggregator_Process_30_ptr (new LocalHashAggregatorType_Process_30(processor_Process_29, UID_Process_30));
        LocalHashAggregatorType_Process_30 * localHashAggregator_Process_30 = localHashAggregator_Process_30_ptr.get();
        ULONG localHashAggregator_Process_30_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Process_29_Data0>> delegate_localHashAggregator_Process_30_ptr (new OperatorDelegate<Process_29_Data0>(OperatorDelegate<Process_29_Data0>::FromOperator(localHashAggregator_Process_30)));
        OperatorDelegate<Process_29_Data0> * delegate_localHashAggregator_Process_30 = delegate_localHashAggregator_Process_30_ptr.get();
        ULONG delegate_localHashAggregator_Process_30_count = 1;
        // Define sorter type
        typedef Sorter<Process_29_Data0> SorterType_Process_31;
        // Construct operator and initialize it.
        unique_ptr<SorterType_Process_31> sorter_Process_31_ptr (new SorterType_Process_31(delegate_localHashAggregator_Process_30, &StdSort<Process_29_Data0>::Sort<KeyComparePolicy<Process_29_Data0, UID_Process_31>, (sizeof(Process_29_Data0)<=CACHELINE_SIZE)>, ScopeLoserTreeDelegate<Process_29_Data0>::CreateDelegate<UID_Process_31>(), false, 327994571 /*memoryQuota*/, UID_Process_31));
        SorterType_Process_31 * sorter_Process_31 = sorter_Process_31_ptr.get();
        ULONG sorter_Process_31_count = 1;
        // Define stream aggregator type
        typedef StreamAggregator<SorterType_Process_31, Process_29_Data0, Process_29_Data0, UID_Process_32> StreamAggregatorType_Process_32;
        // Construct operator and initialize it.
        unique_ptr<StreamAggregatorType_Process_32> streamAggregator_Process_32_ptr (new StreamAggregatorType_Process_32(sorter_Process_31, false, UID_Process_32));
        StreamAggregatorType_Process_32 * streamAggregator_Process_32 = streamAggregator_Process_32_ptr.get();
        ULONG streamAggregator_Process_32_count = 1;
        // Define the type of the operator
        typedef FilterTransformer<StreamAggregatorType_Process_32, Process_29_Data0, Process_33_Data0, UID_Process_33> FilterTransformerType_Process_33;
        // Construct operator and initialize it.
        unique_ptr<FilterTransformerType_Process_33> filterTransformer_Process_33_ptr (new FilterTransformerType_Process_33(streamAggregator_Process_32, UID_Process_33));
        FilterTransformerType_Process_33 * filterTransformer_Process_33 = filterTransformer_Process_33_ptr.get();
        ULONG filterTransformer_Process_33_count = 1;
        // Define outputer type
        typedef Outputer<FilterTransformerType_Process_33, Process_33_Data0, TextOutputPolicy<Process_33_Data0, UID_SV7_Combine_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true>>, false> OutputerType5_SV7_Combine;
        // Construct operator and initialize it
        unique_ptr<OutputerType5_SV7_Combine> outputer_SV7_Combine_out0_ptr(new OutputerType5_SV7_Combine(filterTransformer_Process_33, outputFileNames[0], x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', nullptr, false, false, true, false, "O", UTF8, true), UID_SV7_Combine_out0));
        OutputerType5_SV7_Combine * outputer_SV7_Combine_out0 = outputer_SV7_Combine_out0_ptr.get();

        try
        {
            // Init operator chain
            outputer_SV7_Combine_out0->Init();
    
            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_33_Data0 row;
            outputer_SV7_Combine_out0->GetNextRow(row);
    
            // Close operator chain
            outputer_SV7_Combine_out0->Close();
        }
        catch(ExceptionWithStack & ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(ex.GetErrorDetails());
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV7_Combine_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeProcessorManaged<HashJoin_28_Data0, Process_29_Data0> * ScopeEngine::ScopeProcessorManagedFactory::MakeSqlIp<HashJoin_28_Data0, Process_29_Data0, UID_Process_29>(OperatorDelegate<HashJoin_28_Data0>*);
#endif // defined(COMPILE_MANAGED)

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#endif
#pragma endregion SV7_Combine
// Empty footer
