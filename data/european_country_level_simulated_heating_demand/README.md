
DATAPACKAGE: WHEN2HEAT HEATING PROFILES
===========================================================================

https://doi.org/10.25832/when2heat/2019-08-06

by Open Power System Data: http://www.open-power-system-data.org/

Package Version: 2019-08-06

Simulated hourly country-aggregated heat demand and COP time series

This dataset comprises national time series for representing building heat
pumps in power system models. The heat demand of buildings and the
coefficient of performance (COP) of heat pumps is calculated for 16
European countries from 2008 to 2018 in an hourly resolution.
Heat demand time series for space and water heating are computed by
combining gas standard load profiles with spatial temperature and wind
speed reanalysis data as well as population geodata. The profiles are
year-wise scaled to 1 TWh each. For the years 2008 to 2013, the data is
additionally scaled with annual statistics on the final energy consumption
for heating.
COP time series for different heat sources – air, ground, and groundwater
– and different heat sinks – floor heating, radiators, and water
heating – are calculated based on COP and heating curves using reanalysis
temperature data, spatially aggregated with respect to the heat demand, and
corrected based on field measurements.
All data processing as well as the download of relevant input data is
conducted in python and pandas and has been documented in the Jupyter
notebooks linked below. Please also consider and cite our <a
href="https://doi.org/10.1038/s41597-019-0199-y">Data Descriptor</a>.

The data package covers the geographical region of 16 European countries.

We follow the Data Package standard by the Frictionless Data project, a
part of the Open Knowledge Foundation: http://frictionlessdata.io/


Documentation and script
===========================================================================

This README only contains the most basic information about the data package.
For the full documentation, please see the notebook script that was used to
generate the data package. You can find it at:

https://nbviewer.jupyter.org/github/oruhnau/when2heat/blob/2019-08-06/main.ipynb

Or on GitHub at:

https://github.com/oruhnau/when2heat/blob/2019-08-06/main.ipynb

License and attribution
===========================================================================

Data license: 
    [Creative Commons Attribution 4.0](https://creativecommons.org/licenses/by/4.0/)

Script license:
    [MIT License](https://opensource.org/licenses/MIT)

Attribution:
    Attribution should be given as follows:

- Ruhnau, O., Hirth, L., and
    Praktiknjo, A. (2019). Time series of heat demand and heat pump
    efficiency for energy system modeling. Scientific Data, 6, 189.
    https://doi.org/10.1038/s41597-019-0199-y
- Ruhnau, O. (2019).
    When2Heat Heating Profiles. Open Power System Data.
    https://doi.org/10.25832/when2heat/2019-08-06


Version history
===========================================================================

* 2019-08-06 Minor revisions


Resources
===========================================================================

* [Package description page](http://data.open-power-system-data.org/when2heat/2019-08-06/)
* [ZIP Package](http://data.open-power-system-data.org/when2heat/opsd-when2heat-2019-08-06.zip)
* [Script and documentation](https://github.com/oruhnau/when2heat/blob/2019-08-06/main.ipynb)
* [Original input data](http://data.open-power-system-data.org/when2heat/2019-08-06/original_data/)


Sources
===========================================================================

* [ECMWF](https://www.ecmwf.int/en/forecasts/datasets/archive-datasets/reanalysis-datasets/era-interim)
* [Eurostat](http://ec.europa.eu/eurostat/web/gisco/geodata/reference-data/population-distribution-demography/geostat)
* [EU Building Database](https://ec.europa.eu/energy/en/eu-buildings-database)
* [BGW](http://www.gwb-netz.de/wa_files/05_bgw_leitfaden_lastprofile_56550.pdf)
* [BDEW](https://www.enwg-veroeffentlichungen.de/badtoelz/Netze/Gasnetz/Netzbeschreibung/LF-Abwicklung-von-Standardlastprofilen-Gas-20110630-final.pdf)


Field documentation
===========================================================================


when2heat.csv
---------------------------------------------------------------------------

* utc_timestamp
    - Type: datetime
    - Format: YYYY-MM-DDThh:mm:ssZ
    - Description: Start of timeperiod in Coordinated Universal Time
* cet_cest_timestamp
    - Type: datetime
    - Format: YYYY-MM-DDThh:mm:ss
    - Description: Start of timeperiod in Central European (Summer-) Time
* AT_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Austria with floor heating
* AT_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Austria with radiators
* AT_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Austria
* AT_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Austria with floor heating
* AT_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Austria with radiators
* AT_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Austria
* AT_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Austria with floor heating
* AT_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Austria with radiators
* AT_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Austria
* AT_heat_demand_space
    - Type: number
    - Description: Heat demand in Austria in MW for space heating
* AT_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Austria in MW for space heating in commercial buildings
* AT_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Austria in MW for space heating in multi-family houses
* AT_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Austria in MW for space heating in single-family houses
* AT_heat_demand_total
    - Type: number
    - Description: Heat demand in Austria in MW for space and water heating
* AT_heat_demand_water
    - Type: number
    - Description: Heat demand in Austria in MW for water heating
* AT_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Austria in MW for water heating in commercial buildings
* AT_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Austria in MW for water heating in multi-family houses
* AT_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Austria in MW for water heating in single-family houses
* AT_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Austria in MW/TWh for space heating in commercial buildings
* AT_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Austria in MW/TWh for space heating in multi-family houses
* AT_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Austria in MW/TWh for space heating in single-family houses
* AT_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Austria in MW/TWh for water heating in commercial buildings
* AT_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Austria in MW/TWh for water heating in multi-family houses
* AT_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Austria in MW/TWh for water heating in single-family houses
* BE_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Belgium with floor heating
* BE_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Belgium with radiators
* BE_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Belgium
* BE_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Belgium with floor heating
* BE_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Belgium with radiators
* BE_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Belgium
* BE_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Belgium with floor heating
* BE_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Belgium with radiators
* BE_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Belgium
* BE_heat_demand_space
    - Type: number
    - Description: Heat demand in Belgium in MW for space heating
* BE_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Belgium in MW for space heating in commercial buildings
* BE_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Belgium in MW for space heating in multi-family houses
* BE_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Belgium in MW for space heating in single-family houses
* BE_heat_demand_total
    - Type: number
    - Description: Heat demand in Belgium in MW for space and water heating
* BE_heat_demand_water
    - Type: number
    - Description: Heat demand in Belgium in MW for water heating
* BE_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Belgium in MW for water heating in commercial buildings
* BE_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Belgium in MW for water heating in multi-family houses
* BE_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Belgium in MW for water heating in single-family houses
* BE_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Belgium in MW/TWh for space heating in commercial buildings
* BE_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Belgium in MW/TWh for space heating in multi-family houses
* BE_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Belgium in MW/TWh for space heating in single-family houses
* BE_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Belgium in MW/TWh for water heating in commercial buildings
* BE_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Belgium in MW/TWh for water heating in multi-family houses
* BE_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Belgium in MW/TWh for water heating in single-family houses
* BG_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Bulgaria with floor heating
* BG_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Bulgaria with radiators
* BG_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Bulgaria
* BG_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Bulgaria with floor heating
* BG_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Bulgaria with radiators
* BG_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Bulgaria
* BG_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Bulgaria with floor heating
* BG_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Bulgaria with radiators
* BG_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Bulgaria
* BG_heat_demand_space
    - Type: number
    - Description: Heat demand in Bulgaria in MW for space heating
* BG_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Bulgaria in MW for space heating in commercial buildings
* BG_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Bulgaria in MW for space heating in multi-family houses
* BG_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Bulgaria in MW for space heating in single-family houses
* BG_heat_demand_total
    - Type: number
    - Description: Heat demand in Bulgaria in MW for space and water heating
* BG_heat_demand_water
    - Type: number
    - Description: Heat demand in Bulgaria in MW for water heating
* BG_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Bulgaria in MW for water heating in commercial buildings
* BG_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Bulgaria in MW for water heating in multi-family houses
* BG_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Bulgaria in MW for water heating in single-family houses
* BG_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Bulgaria in MW/TWh for space heating in commercial buildings
* BG_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Bulgaria in MW/TWh for space heating in multi-family houses
* BG_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Bulgaria in MW/TWh for space heating in single-family houses
* BG_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Bulgaria in MW/TWh for water heating in commercial buildings
* BG_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Bulgaria in MW/TWh for water heating in multi-family houses
* BG_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Bulgaria in MW/TWh for water heating in single-family houses
* CZ_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Czech Republic with floor heating
* CZ_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Czech Republic with radiators
* CZ_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Czech Republic
* CZ_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Czech Republic with floor heating
* CZ_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Czech Republic with radiators
* CZ_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Czech Republic
* CZ_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Czech Republic with floor heating
* CZ_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Czech Republic with radiators
* CZ_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Czech Republic
* CZ_heat_demand_space
    - Type: number
    - Description: Heat demand in Czech Republic in MW for space heating
* CZ_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Czech Republic in MW for space heating in commercial buildings
* CZ_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Czech Republic in MW for space heating in multi-family houses
* CZ_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Czech Republic in MW for space heating in single-family houses
* CZ_heat_demand_total
    - Type: number
    - Description: Heat demand in Czech Republic in MW for space and water heating
* CZ_heat_demand_water
    - Type: number
    - Description: Heat demand in Czech Republic in MW for water heating
* CZ_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Czech Republic in MW for water heating in commercial buildings
* CZ_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Czech Republic in MW for water heating in multi-family houses
* CZ_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Czech Republic in MW for water heating in single-family houses
* CZ_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Czech Republic in MW/TWh for space heating in commercial buildings
* CZ_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Czech Republic in MW/TWh for space heating in multi-family houses
* CZ_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Czech Republic in MW/TWh for space heating in single-family houses
* CZ_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Czech Republic in MW/TWh for water heating in commercial buildings
* CZ_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Czech Republic in MW/TWh for water heating in multi-family houses
* CZ_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Czech Republic in MW/TWh for water heating in single-family houses
* DE_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Germany with floor heating
* DE_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Germany with radiators
* DE_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Germany
* DE_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Germany with floor heating
* DE_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Germany with radiators
* DE_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Germany
* DE_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Germany with floor heating
* DE_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Germany with radiators
* DE_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Germany
* DE_heat_demand_space
    - Type: number
    - Description: Heat demand in Germany in MW for space heating
* DE_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Germany in MW for space heating in commercial buildings
* DE_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Germany in MW for space heating in multi-family houses
* DE_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Germany in MW for space heating in single-family houses
* DE_heat_demand_total
    - Type: number
    - Description: Heat demand in Germany in MW for space and water heating
* DE_heat_demand_water
    - Type: number
    - Description: Heat demand in Germany in MW for water heating
* DE_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Germany in MW for water heating in commercial buildings
* DE_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Germany in MW for water heating in multi-family houses
* DE_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Germany in MW for water heating in single-family houses
* DE_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Germany in MW/TWh for space heating in commercial buildings
* DE_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Germany in MW/TWh for space heating in multi-family houses
* DE_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Germany in MW/TWh for space heating in single-family houses
* DE_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Germany in MW/TWh for water heating in commercial buildings
* DE_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Germany in MW/TWh for water heating in multi-family houses
* DE_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Germany in MW/TWh for water heating in single-family houses
* FR_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in France with floor heating
* FR_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in France with radiators
* FR_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in France
* FR_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in France with floor heating
* FR_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in France with radiators
* FR_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in France
* FR_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in France with floor heating
* FR_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in France with radiators
* FR_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in France
* FR_heat_demand_space
    - Type: number
    - Description: Heat demand in France in MW for space heating
* FR_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in France in MW for space heating in commercial buildings
* FR_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in France in MW for space heating in multi-family houses
* FR_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in France in MW for space heating in single-family houses
* FR_heat_demand_total
    - Type: number
    - Description: Heat demand in France in MW for space and water heating
* FR_heat_demand_water
    - Type: number
    - Description: Heat demand in France in MW for water heating
* FR_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in France in MW for water heating in commercial buildings
* FR_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in France in MW for water heating in multi-family houses
* FR_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in France in MW for water heating in single-family houses
* FR_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in France in MW/TWh for space heating in commercial buildings
* FR_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in France in MW/TWh for space heating in multi-family houses
* FR_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in France in MW/TWh for space heating in single-family houses
* FR_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in France in MW/TWh for water heating in commercial buildings
* FR_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in France in MW/TWh for water heating in multi-family houses
* FR_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in France in MW/TWh for water heating in single-family houses
* GB_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Great Britain with floor heating
* GB_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Great Britain with radiators
* GB_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Great Britain
* GB_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Great Britain with floor heating
* GB_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Great Britain with radiators
* GB_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Great Britain
* GB_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Great Britain with floor heating
* GB_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Great Britain with radiators
* GB_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Great Britain
* GB_heat_demand_space
    - Type: number
    - Description: Heat demand in Great Britain in MW for space heating
* GB_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Great Britain in MW for space heating in commercial buildings
* GB_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Great Britain in MW for space heating in multi-family houses
* GB_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Great Britain in MW for space heating in single-family houses
* GB_heat_demand_total
    - Type: number
    - Description: Heat demand in Great Britain in MW for space and water heating
* GB_heat_demand_water
    - Type: number
    - Description: Heat demand in Great Britain in MW for water heating
* GB_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Great Britain in MW for water heating in commercial buildings
* GB_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Great Britain in MW for water heating in multi-family houses
* GB_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Great Britain in MW for water heating in single-family houses
* GB_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Great Britain in MW/TWh for space heating in commercial buildings
* GB_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Great Britain in MW/TWh for space heating in multi-family houses
* GB_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Great Britain in MW/TWh for space heating in single-family houses
* GB_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Great Britain in MW/TWh for water heating in commercial buildings
* GB_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Great Britain in MW/TWh for water heating in multi-family houses
* GB_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Great Britain in MW/TWh for water heating in single-family houses
* HR_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Croatia with floor heating
* HR_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Croatia with radiators
* HR_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Croatia
* HR_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Croatia with floor heating
* HR_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Croatia with radiators
* HR_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Croatia
* HR_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Croatia with floor heating
* HR_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Croatia with radiators
* HR_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Croatia
* HR_heat_demand_space
    - Type: number
    - Description: Heat demand in Croatia in MW for space heating
* HR_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Croatia in MW for space heating in commercial buildings
* HR_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Croatia in MW for space heating in multi-family houses
* HR_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Croatia in MW for space heating in single-family houses
* HR_heat_demand_total
    - Type: number
    - Description: Heat demand in Croatia in MW for space and water heating
* HR_heat_demand_water
    - Type: number
    - Description: Heat demand in Croatia in MW for water heating
* HR_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Croatia in MW for water heating in commercial buildings
* HR_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Croatia in MW for water heating in multi-family houses
* HR_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Croatia in MW for water heating in single-family houses
* HR_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Croatia in MW/TWh for space heating in commercial buildings
* HR_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Croatia in MW/TWh for space heating in multi-family houses
* HR_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Croatia in MW/TWh for space heating in single-family houses
* HR_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Croatia in MW/TWh for water heating in commercial buildings
* HR_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Croatia in MW/TWh for water heating in multi-family houses
* HR_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Croatia in MW/TWh for water heating in single-family houses
* HU_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Hungary with floor heating
* HU_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Hungary with radiators
* HU_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Hungary
* HU_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Hungary with floor heating
* HU_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Hungary with radiators
* HU_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Hungary
* HU_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Hungary with floor heating
* HU_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Hungary with radiators
* HU_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Hungary
* HU_heat_demand_space
    - Type: number
    - Description: Heat demand in Hungary in MW for space heating
* HU_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Hungary in MW for space heating in commercial buildings
* HU_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Hungary in MW for space heating in multi-family houses
* HU_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Hungary in MW for space heating in single-family houses
* HU_heat_demand_total
    - Type: number
    - Description: Heat demand in Hungary in MW for space and water heating
* HU_heat_demand_water
    - Type: number
    - Description: Heat demand in Hungary in MW for water heating
* HU_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Hungary in MW for water heating in commercial buildings
* HU_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Hungary in MW for water heating in multi-family houses
* HU_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Hungary in MW for water heating in single-family houses
* HU_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Hungary in MW/TWh for space heating in commercial buildings
* HU_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Hungary in MW/TWh for space heating in multi-family houses
* HU_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Hungary in MW/TWh for space heating in single-family houses
* HU_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Hungary in MW/TWh for water heating in commercial buildings
* HU_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Hungary in MW/TWh for water heating in multi-family houses
* HU_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Hungary in MW/TWh for water heating in single-family houses
* IE_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Ireland with floor heating
* IE_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Ireland with radiators
* IE_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Ireland
* IE_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Ireland with floor heating
* IE_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Ireland with radiators
* IE_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Ireland
* IE_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Ireland with floor heating
* IE_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Ireland with radiators
* IE_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Ireland
* IE_heat_demand_space
    - Type: number
    - Description: Heat demand in Ireland in MW for space heating
* IE_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Ireland in MW for space heating in commercial buildings
* IE_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Ireland in MW for space heating in multi-family houses
* IE_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Ireland in MW for space heating in single-family houses
* IE_heat_demand_total
    - Type: number
    - Description: Heat demand in Ireland in MW for space and water heating
* IE_heat_demand_water
    - Type: number
    - Description: Heat demand in Ireland in MW for water heating
* IE_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Ireland in MW for water heating in commercial buildings
* IE_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Ireland in MW for water heating in multi-family houses
* IE_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Ireland in MW for water heating in single-family houses
* IE_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Ireland in MW/TWh for space heating in commercial buildings
* IE_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Ireland in MW/TWh for space heating in multi-family houses
* IE_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Ireland in MW/TWh for space heating in single-family houses
* IE_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Ireland in MW/TWh for water heating in commercial buildings
* IE_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Ireland in MW/TWh for water heating in multi-family houses
* IE_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Ireland in MW/TWh for water heating in single-family houses
* LU_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Luxembourg with floor heating
* LU_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Luxembourg with radiators
* LU_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Luxembourg
* LU_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Luxembourg with floor heating
* LU_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Luxembourg with radiators
* LU_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Luxembourg
* LU_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Luxembourg with floor heating
* LU_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Luxembourg with radiators
* LU_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Luxembourg
* LU_heat_demand_space
    - Type: number
    - Description: Heat demand in Luxembourg in MW for space heating
* LU_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Luxembourg in MW for space heating in commercial buildings
* LU_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Luxembourg in MW for space heating in multi-family houses
* LU_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Luxembourg in MW for space heating in single-family houses
* LU_heat_demand_total
    - Type: number
    - Description: Heat demand in Luxembourg in MW for space and water heating
* LU_heat_demand_water
    - Type: number
    - Description: Heat demand in Luxembourg in MW for water heating
* LU_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Luxembourg in MW for water heating in commercial buildings
* LU_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Luxembourg in MW for water heating in multi-family houses
* LU_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Luxembourg in MW for water heating in single-family houses
* LU_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Luxembourg in MW/TWh for space heating in commercial buildings
* LU_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Luxembourg in MW/TWh for space heating in multi-family houses
* LU_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Luxembourg in MW/TWh for space heating in single-family houses
* LU_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Luxembourg in MW/TWh for water heating in commercial buildings
* LU_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Luxembourg in MW/TWh for water heating in multi-family houses
* LU_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Luxembourg in MW/TWh for water heating in single-family houses
* NL_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Netherlands with floor heating
* NL_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Netherlands with radiators
* NL_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Netherlands
* NL_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Netherlands with floor heating
* NL_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Netherlands with radiators
* NL_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Netherlands
* NL_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Netherlands with floor heating
* NL_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Netherlands with radiators
* NL_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Netherlands
* NL_heat_demand_space
    - Type: number
    - Description: Heat demand in Netherlands in MW for space heating
* NL_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Netherlands in MW for space heating in commercial buildings
* NL_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Netherlands in MW for space heating in multi-family houses
* NL_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Netherlands in MW for space heating in single-family houses
* NL_heat_demand_total
    - Type: number
    - Description: Heat demand in Netherlands in MW for space and water heating
* NL_heat_demand_water
    - Type: number
    - Description: Heat demand in Netherlands in MW for water heating
* NL_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Netherlands in MW for water heating in commercial buildings
* NL_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Netherlands in MW for water heating in multi-family houses
* NL_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Netherlands in MW for water heating in single-family houses
* NL_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Netherlands in MW/TWh for space heating in commercial buildings
* NL_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Netherlands in MW/TWh for space heating in multi-family houses
* NL_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Netherlands in MW/TWh for space heating in single-family houses
* NL_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Netherlands in MW/TWh for water heating in commercial buildings
* NL_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Netherlands in MW/TWh for water heating in multi-family houses
* NL_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Netherlands in MW/TWh for water heating in single-family houses
* PL_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Poland with floor heating
* PL_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Poland with radiators
* PL_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Poland
* PL_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Poland with floor heating
* PL_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Poland with radiators
* PL_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Poland
* PL_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Poland with floor heating
* PL_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Poland with radiators
* PL_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Poland
* PL_heat_demand_space
    - Type: number
    - Description: Heat demand in Poland in MW for space heating
* PL_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Poland in MW for space heating in commercial buildings
* PL_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Poland in MW for space heating in multi-family houses
* PL_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Poland in MW for space heating in single-family houses
* PL_heat_demand_total
    - Type: number
    - Description: Heat demand in Poland in MW for space and water heating
* PL_heat_demand_water
    - Type: number
    - Description: Heat demand in Poland in MW for water heating
* PL_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Poland in MW for water heating in commercial buildings
* PL_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Poland in MW for water heating in multi-family houses
* PL_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Poland in MW for water heating in single-family houses
* PL_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Poland in MW/TWh for space heating in commercial buildings
* PL_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Poland in MW/TWh for space heating in multi-family houses
* PL_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Poland in MW/TWh for space heating in single-family houses
* PL_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Poland in MW/TWh for water heating in commercial buildings
* PL_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Poland in MW/TWh for water heating in multi-family houses
* PL_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Poland in MW/TWh for water heating in single-family houses
* RO_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Romania with floor heating
* RO_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Romania with radiators
* RO_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Romania
* RO_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Romania with floor heating
* RO_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Romania with radiators
* RO_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Romania
* RO_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Romania with floor heating
* RO_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Romania with radiators
* RO_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Romania
* RO_heat_demand_space
    - Type: number
    - Description: Heat demand in Romania in MW for space heating
* RO_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Romania in MW for space heating in commercial buildings
* RO_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Romania in MW for space heating in multi-family houses
* RO_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Romania in MW for space heating in single-family houses
* RO_heat_demand_total
    - Type: number
    - Description: Heat demand in Romania in MW for space and water heating
* RO_heat_demand_water
    - Type: number
    - Description: Heat demand in Romania in MW for water heating
* RO_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Romania in MW for water heating in commercial buildings
* RO_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Romania in MW for water heating in multi-family houses
* RO_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Romania in MW for water heating in single-family houses
* RO_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Romania in MW/TWh for space heating in commercial buildings
* RO_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Romania in MW/TWh for space heating in multi-family houses
* RO_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Romania in MW/TWh for space heating in single-family houses
* RO_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Romania in MW/TWh for water heating in commercial buildings
* RO_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Romania in MW/TWh for water heating in multi-family houses
* RO_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Romania in MW/TWh for water heating in single-family houses
* SI_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Slovenia with floor heating
* SI_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Slovenia with radiators
* SI_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Slovenia
* SI_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Slovenia with floor heating
* SI_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Slovenia with radiators
* SI_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Slovenia
* SI_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Slovenia with floor heating
* SI_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Slovenia with radiators
* SI_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Slovenia
* SI_heat_demand_space
    - Type: number
    - Description: Heat demand in Slovenia in MW for space heating
* SI_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Slovenia in MW for space heating in commercial buildings
* SI_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Slovenia in MW for space heating in multi-family houses
* SI_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Slovenia in MW for space heating in single-family houses
* SI_heat_demand_total
    - Type: number
    - Description: Heat demand in Slovenia in MW for space and water heating
* SI_heat_demand_water
    - Type: number
    - Description: Heat demand in Slovenia in MW for water heating
* SI_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Slovenia in MW for water heating in commercial buildings
* SI_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Slovenia in MW for water heating in multi-family houses
* SI_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Slovenia in MW for water heating in single-family houses
* SI_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Slovenia in MW/TWh for space heating in commercial buildings
* SI_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Slovenia in MW/TWh for space heating in multi-family houses
* SI_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Slovenia in MW/TWh for space heating in single-family houses
* SI_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Slovenia in MW/TWh for water heating in commercial buildings
* SI_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Slovenia in MW/TWh for water heating in multi-family houses
* SI_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Slovenia in MW/TWh for water heating in single-family houses
* SK_COP_ASHP_floor
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Slovakia with floor heating
* SK_COP_ASHP_radiator
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for space heating in Slovakia with radiators
* SK_COP_ASHP_water
    - Type: number
    - Description: COP of air-source heat pumps (ASHP) for water heating in Slovakia
* SK_COP_GSHP_floor
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Slovakia with floor heating
* SK_COP_GSHP_radiator
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for space heating in Slovakia with radiators
* SK_COP_GSHP_water
    - Type: number
    - Description: COP of ground-source heat pumps (GSHP) for water heating in Slovakia
* SK_COP_WSHP_floor
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Slovakia with floor heating
* SK_COP_WSHP_radiator
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for space heating in Slovakia with radiators
* SK_COP_WSHP_water
    - Type: number
    - Description: COP of groundwater-source heat pumps (WSHP) for water heating in Slovakia
* SK_heat_demand_space
    - Type: number
    - Description: Heat demand in Slovakia in MW for space heating
* SK_heat_demand_space_COM
    - Type: number
    - Description: Heat demand in Slovakia in MW for space heating in commercial buildings
* SK_heat_demand_space_MFH
    - Type: number
    - Description: Heat demand in Slovakia in MW for space heating in multi-family houses
* SK_heat_demand_space_SFH
    - Type: number
    - Description: Heat demand in Slovakia in MW for space heating in single-family houses
* SK_heat_demand_total
    - Type: number
    - Description: Heat demand in Slovakia in MW for space and water heating
* SK_heat_demand_water
    - Type: number
    - Description: Heat demand in Slovakia in MW for water heating
* SK_heat_demand_water_COM
    - Type: number
    - Description: Heat demand in Slovakia in MW for water heating in commercial buildings
* SK_heat_demand_water_MFH
    - Type: number
    - Description: Heat demand in Slovakia in MW for water heating in multi-family houses
* SK_heat_demand_water_SFH
    - Type: number
    - Description: Heat demand in Slovakia in MW for water heating in single-family houses
* SK_heat_profile_space_COM
    - Type: number
    - Description: Normalized heat demand in Slovakia in MW/TWh for space heating in commercial buildings
* SK_heat_profile_space_MFH
    - Type: number
    - Description: Normalized heat demand in Slovakia in MW/TWh for space heating in multi-family houses
* SK_heat_profile_space_SFH
    - Type: number
    - Description: Normalized heat demand in Slovakia in MW/TWh for space heating in single-family houses
* SK_heat_profile_water_COM
    - Type: number
    - Description: Normalized heat demand in Slovakia in MW/TWh for water heating in commercial buildings
* SK_heat_profile_water_MFH
    - Type: number
    - Description: Normalized heat demand in Slovakia in MW/TWh for water heating in multi-family houses
* SK_heat_profile_water_SFH
    - Type: number
    - Description: Normalized heat demand in Slovakia in MW/TWh for water heating in single-family houses


Feedback
===========================================================================

Thank you for using data provided by Open Power System Data. If you have
any question or feedback, please do not hesitate to contact us.

For this data package, contact:
Oliver Ruhnau <oliver.ruhnau@rwth-aachen.de>

For general issues, find our team contact details on our website:
http://www.open-power-system-data.org














