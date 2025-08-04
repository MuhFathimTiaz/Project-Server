CMD:speed(playerid, params[])
{
    new vehicleid = GetPlayerVehicleID(playerid);
    if (vehicleid != 0)
    {
        new Float:speed = AC_GetVehicleSpeed(vehicleid);
        new msg[64];
        format(msg, sizeof msg, "Kecepatan kendaraanmu: %.2f km/jam", speed);
        SendClientMessage(playerid, -1, msg);
    }
    else
    {
        SendClientMessage(playerid, -1, "Kamu tidak sedang di dalam kendaraan.");
    }
    return 1;
}
